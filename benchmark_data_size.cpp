#include <stdio.h>

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
    QuoteRequest qr = QuoteRequest_createTestData();
    MarketData md = MarketData_createTestData();

    unsigned long int mdSum = 0;
    printf("size of market_data = %lu\n", sizeof(md));
    mdSum += sizeof(md);

    vector<MarketDataEntry>::iterator mdIterator;
    for (mdIterator = md.mdEntries.begin(); mdIterator != md.mdEntries.end(); ++mdIterator) {
        printf("Size of MarketDataEntry = %lu\n", sizeof((*mdIterator)));
        mdSum += sizeof((*mdIterator));
    }
    printf("Total MD: %lu\n", mdSum);

    printf("\n\n");

    unsigned long int qrSum = 0;
    printf("size of quote_request = %lu\n", sizeof(qr));
    qrSum += sizeof(qr);

    vector<RelatedSym>::iterator rsIterator;
    for (rsIterator = qr.related.begin(); rsIterator != qr.related.end(); ++rsIterator) {
        printf("Size of Related Sym = %lu\n", sizeof((*rsIterator)));
        qrSum += sizeof((*rsIterator));
    }

    printf("Total QR: %lu\n", qrSum);

    return 0;
}
