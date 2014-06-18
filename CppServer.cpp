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

#include <thrift/concurrency/ThreadManager.h>
#include <thrift/concurrency/PosixThreadFactory.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/server/TThreadPoolServer.h>
#include <thrift/server/TThreadedServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TTransportUtils.h>

#include <iostream>
#include <stdexcept>
#include <sstream>

#include "gen-cpp/Benchmark.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;

using namespace benchmark;

using namespace boost;

size_t msg_counter = 0;

class BenchmarkHandler : virtual public BenchmarkIf {
 public:
    BenchmarkHandler() {}

    void sendMarketData(MarketData& _return, const MarketData& marketData) {
        size_t counter = msg_counter;
        ++msg_counter;

      _return = marketData;
      _return.isEcho = 1;
    }

    void sendQuoteRequest(QuoteRequest& _return, const QuoteRequest& quoteRequest) {
        size_t counter = msg_counter;
        ++msg_counter;

        _return = quoteRequest;
        _return.isEcho = 1;
    }

protected:

};

int main(int argc, char **argv) {

#ifdef _WIN32
  WSADATA wsaData = {};
  WORD wVersionRequested = MAKEWORD(2, 2);
  int err = WSAStartup(wVersionRequested, &wsaData);
#endif

  boost::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
  boost::shared_ptr<BenchmarkHandler> handler(new BenchmarkHandler());
  boost::shared_ptr<TProcessor> processor(new BenchmarkProcessor(handler));
  boost::shared_ptr<TServerTransport> serverTransport(new TServerSocket(9090));
  boost::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());

  TSimpleServer server(processor,
                       serverTransport,
                       transportFactory,
                       protocolFactory);


  /**
   * Or you could do one of these

  shared_ptr<ThreadManager> threadManager =
    ThreadManager::newSimpleThreadManager(workerCount);
  shared_ptr<PosixThreadFactory> threadFactory =
    shared_ptr<PosixThreadFactory>(new PosixThreadFactory());
  threadManager->threadFactory(threadFactory);
  threadManager->start();
  TThreadPoolServer server(processor,
                           serverTransport,
                           transportFactory,
                           protocolFactory,
                           threadManager);

  TThreadedServer server(processor,
                         serverTransport,
                         transportFactory,
                         protocolFactory);

  */

  printf("Starting the server...\n");
  fflush(stdout);
  server.serve();
  printf("done.\n");
  fflush(stdout);
  return 0;
}
