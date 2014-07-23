/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <stdio.h>
//#include <unistd.h>
//#include <sys/time.h>

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>

#include "gen-cpp/Benchmark.h"
#include "Utils.hpp"
#include "Profiler.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace benchmark;

using namespace boost;

int main(int argc, char** argv)
{
    try
    {

        if (argc != 3)
        {
          std::cerr << "Usage: Client <num-messages> <host>\n";
          return 1;
        }
        
		size_t num_messages = std::atoi(argv[1]);
        std::string host(argv[2]);
        //int port = std::atoi(argv[3]);

        boost::shared_ptr<TTransport> socket(new TSocket(host, 9090));
        boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
        boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
        BenchmarkClient client(protocol);


        try {
            transport->open();

            MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE start =
              MIDDLEWARENEWSBRIEF_PROFILER_GET_TIME;

            for (size_t i=0; i < num_messages; ++i)
            {
                // Send 10 MarketDatas for each QuoteRequest
                if (i % 10 == 5)
                {
                    QuoteRequest response;
                    client.sendQuoteRequest(response, QuoteRequest_createTestData());
                }
                else
                {
                    MarketData response;
                    client.sendMarketData(response, MarketData_createTestData());
                }
            }

            MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE finish =
              MIDDLEWARENEWSBRIEF_PROFILER_GET_TIME;

            MIDDLEWARENEWSBRIEF_PROFILER_TIME_TYPE elapsed =
              MIDDLEWARENEWSBRIEF_PROFILER_DIFF(finish,start);

            transport->close();

            double latency = (double) elapsed / (num_messages * 2.0);
            
            printf("%.3f\n", latency);
            /*
            printf("\n\nAverage latency in %s: %.3f\n\n\n",
                   MIDDLEWARENEWSBRIEF_PROFILER_TIME_UNITS,
                   latency);
            printf("Finished\n");
	    */
	    
        } catch (TException &tx) {
            printf("ERROR: %s\n", tx.what());
        }

    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}
