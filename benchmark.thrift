namespace * benchmark

struct MarketDataEntry {
            1: i32 mdUpdateAction;
            2: i32 mdPriceLevel;
            3: double        mdEntryType;
            4: i32 openCloseSettleFlag;
            5: i32 securityIDSource;
            6: i32 securityID;
            7: i32 rptSeq;
            8: double        mdEntryPx;
            9: i32 mdEntryTime;
            10: i32          mdEntrySize;  // in original i32
            11: i32 numberOfOrders;
            12: double        tradingSessionID;
            13: double        netChgPrevDay;
            14: i32 tradeVolume;
            15: double        tradeCondition;
            16: double        tickDirection;
            17: double        quoteCondition;
            18: i32 aggressorSide;
            19: double        matchEventIndicator;

            20: double dummy1;
            21: i32 dummy2;
}

struct MarketData {
            1: bool    isEcho;
            2: i32        counter;
            3: i32        securityID;
            4: double    applVersionID;
            5: double    messageType;
            6: double    senderCompID;
            7: i32       msgSeqNum;
            8: i32       sendingTime;
            9: i32       tradeDate;
            10: list<MarketDataEntry>  mdEntries;
}

struct RelatedSym {
            1: double    symbol;
            2: i64       orderQuantity;
            3: i32    side;
            4: i64    transactTime;
            5: i32    quoteType;
            6: i32      securityID;
            7: i32      securityIDSource;
            8: double dummy1;
            9: i32 dummy2;
}
struct QuoteRequest {
            1: bool            isEcho;
            2: i32      counter;
            3: i32      securityID;
            4: double             applVersionID;
            5: double             messageType;
            6: double             senderCompID;
            7: i32      msgSeqNum;
            8: i32      sendingTime;
            9: double             quoteReqID;
            10: list<RelatedSym>        related;
}

service Benchmark {
  MarketData sendMarketData(1:MarketData marketData);
  QuoteRequest sendQuoteRequest(1:QuoteRequest quoteRequest);
}
