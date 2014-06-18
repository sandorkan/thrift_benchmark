/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "benchmark_types.h"

#include <algorithm>

namespace benchmark {

const char* MarketDataEntry::ascii_fingerprint = "C297A413C86ACA09582CBD483FA14AAF";
const uint8_t MarketDataEntry::binary_fingerprint[16] = {0xC2,0x97,0xA4,0x13,0xC8,0x6A,0xCA,0x09,0x58,0x2C,0xBD,0x48,0x3F,0xA1,0x4A,0xAF};

uint32_t MarketDataEntry::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mdUpdateAction);
          this->__isset.mdUpdateAction = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mdPriceLevel);
          this->__isset.mdPriceLevel = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->mdEntryType);
          this->__isset.mdEntryType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->openCloseSettleFlag);
          this->__isset.openCloseSettleFlag = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityIDSource);
          this->__isset.securityIDSource = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityID);
          this->__isset.securityID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->rptSeq);
          this->__isset.rptSeq = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->mdEntryPx);
          this->__isset.mdEntryPx = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mdEntryTime);
          this->__isset.mdEntryTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mdEntrySize);
          this->__isset.mdEntrySize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->numberOfOrders);
          this->__isset.numberOfOrders = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->tradingSessionID);
          this->__isset.tradingSessionID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->netChgPrevDay);
          this->__isset.netChgPrevDay = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->tradeVolume);
          this->__isset.tradeVolume = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->tradeCondition);
          this->__isset.tradeCondition = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 16:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->tickDirection);
          this->__isset.tickDirection = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 17:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->quoteCondition);
          this->__isset.quoteCondition = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 18:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->aggressorSide);
          this->__isset.aggressorSide = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 19:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->matchEventIndicator);
          this->__isset.matchEventIndicator = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->dummy1);
          this->__isset.dummy1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dummy2);
          this->__isset.dummy2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MarketDataEntry::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MarketDataEntry");

  xfer += oprot->writeFieldBegin("mdUpdateAction", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->mdUpdateAction);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdPriceLevel", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->mdPriceLevel);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdEntryType", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->mdEntryType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("openCloseSettleFlag", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->openCloseSettleFlag);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityIDSource", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->securityIDSource);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityID", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->securityID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("rptSeq", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->rptSeq);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdEntryPx", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->mdEntryPx);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdEntryTime", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->mdEntryTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdEntrySize", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32(this->mdEntrySize);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("numberOfOrders", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32(this->numberOfOrders);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tradingSessionID", ::apache::thrift::protocol::T_DOUBLE, 12);
  xfer += oprot->writeDouble(this->tradingSessionID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("netChgPrevDay", ::apache::thrift::protocol::T_DOUBLE, 13);
  xfer += oprot->writeDouble(this->netChgPrevDay);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tradeVolume", ::apache::thrift::protocol::T_I32, 14);
  xfer += oprot->writeI32(this->tradeVolume);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tradeCondition", ::apache::thrift::protocol::T_DOUBLE, 15);
  xfer += oprot->writeDouble(this->tradeCondition);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tickDirection", ::apache::thrift::protocol::T_DOUBLE, 16);
  xfer += oprot->writeDouble(this->tickDirection);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("quoteCondition", ::apache::thrift::protocol::T_DOUBLE, 17);
  xfer += oprot->writeDouble(this->quoteCondition);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("aggressorSide", ::apache::thrift::protocol::T_I32, 18);
  xfer += oprot->writeI32(this->aggressorSide);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("matchEventIndicator", ::apache::thrift::protocol::T_DOUBLE, 19);
  xfer += oprot->writeDouble(this->matchEventIndicator);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dummy1", ::apache::thrift::protocol::T_DOUBLE, 20);
  xfer += oprot->writeDouble(this->dummy1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dummy2", ::apache::thrift::protocol::T_I32, 21);
  xfer += oprot->writeI32(this->dummy2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MarketDataEntry &a, MarketDataEntry &b) {
  using ::std::swap;
  swap(a.mdUpdateAction, b.mdUpdateAction);
  swap(a.mdPriceLevel, b.mdPriceLevel);
  swap(a.mdEntryType, b.mdEntryType);
  swap(a.openCloseSettleFlag, b.openCloseSettleFlag);
  swap(a.securityIDSource, b.securityIDSource);
  swap(a.securityID, b.securityID);
  swap(a.rptSeq, b.rptSeq);
  swap(a.mdEntryPx, b.mdEntryPx);
  swap(a.mdEntryTime, b.mdEntryTime);
  swap(a.mdEntrySize, b.mdEntrySize);
  swap(a.numberOfOrders, b.numberOfOrders);
  swap(a.tradingSessionID, b.tradingSessionID);
  swap(a.netChgPrevDay, b.netChgPrevDay);
  swap(a.tradeVolume, b.tradeVolume);
  swap(a.tradeCondition, b.tradeCondition);
  swap(a.tickDirection, b.tickDirection);
  swap(a.quoteCondition, b.quoteCondition);
  swap(a.aggressorSide, b.aggressorSide);
  swap(a.matchEventIndicator, b.matchEventIndicator);
  swap(a.dummy1, b.dummy1);
  swap(a.dummy2, b.dummy2);
  swap(a.__isset, b.__isset);
}

const char* MarketData::ascii_fingerprint = "B81D2C0D404EC2D873B9569707FCAACD";
const uint8_t MarketData::binary_fingerprint[16] = {0xB8,0x1D,0x2C,0x0D,0x40,0x4E,0xC2,0xD8,0x73,0xB9,0x56,0x97,0x07,0xFC,0xAA,0xCD};

uint32_t MarketData::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isEcho);
          this->__isset.isEcho = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->counter);
          this->__isset.counter = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityID);
          this->__isset.securityID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->applVersionID);
          this->__isset.applVersionID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->messageType);
          this->__isset.messageType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->senderCompID);
          this->__isset.senderCompID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->msgSeqNum);
          this->__isset.msgSeqNum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->sendingTime);
          this->__isset.sendingTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->tradeDate);
          this->__isset.tradeDate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->mdEntries.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->mdEntries.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->mdEntries[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.mdEntries = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MarketData::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MarketData");

  xfer += oprot->writeFieldBegin("isEcho", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isEcho);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("counter", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->counter);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityID", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->securityID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applVersionID", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->applVersionID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("messageType", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->messageType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("senderCompID", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->senderCompID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("msgSeqNum", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->msgSeqNum);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sendingTime", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->sendingTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tradeDate", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->tradeDate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mdEntries", ::apache::thrift::protocol::T_LIST, 10);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->mdEntries.size()));
    std::vector<MarketDataEntry> ::const_iterator _iter5;
    for (_iter5 = this->mdEntries.begin(); _iter5 != this->mdEntries.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MarketData &a, MarketData &b) {
  using ::std::swap;
  swap(a.isEcho, b.isEcho);
  swap(a.counter, b.counter);
  swap(a.securityID, b.securityID);
  swap(a.applVersionID, b.applVersionID);
  swap(a.messageType, b.messageType);
  swap(a.senderCompID, b.senderCompID);
  swap(a.msgSeqNum, b.msgSeqNum);
  swap(a.sendingTime, b.sendingTime);
  swap(a.tradeDate, b.tradeDate);
  swap(a.mdEntries, b.mdEntries);
  swap(a.__isset, b.__isset);
}

const char* RelatedSym::ascii_fingerprint = "42BD3752F8BCBAC526D1BBEA67B7DE3C";
const uint8_t RelatedSym::binary_fingerprint[16] = {0x42,0xBD,0x37,0x52,0xF8,0xBC,0xBA,0xC5,0x26,0xD1,0xBB,0xEA,0x67,0xB7,0xDE,0x3C};

uint32_t RelatedSym::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->symbol);
          this->__isset.symbol = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->orderQuantity);
          this->__isset.orderQuantity = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->side);
          this->__isset.side = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->transactTime);
          this->__isset.transactTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->quoteType);
          this->__isset.quoteType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityID);
          this->__isset.securityID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityIDSource);
          this->__isset.securityIDSource = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->dummy1);
          this->__isset.dummy1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dummy2);
          this->__isset.dummy2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RelatedSym::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RelatedSym");

  xfer += oprot->writeFieldBegin("symbol", ::apache::thrift::protocol::T_DOUBLE, 1);
  xfer += oprot->writeDouble(this->symbol);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("orderQuantity", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->orderQuantity);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("side", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->side);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("transactTime", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->transactTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("quoteType", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->quoteType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityID", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->securityID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityIDSource", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->securityIDSource);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dummy1", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->dummy1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dummy2", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->dummy2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RelatedSym &a, RelatedSym &b) {
  using ::std::swap;
  swap(a.symbol, b.symbol);
  swap(a.orderQuantity, b.orderQuantity);
  swap(a.side, b.side);
  swap(a.transactTime, b.transactTime);
  swap(a.quoteType, b.quoteType);
  swap(a.securityID, b.securityID);
  swap(a.securityIDSource, b.securityIDSource);
  swap(a.dummy1, b.dummy1);
  swap(a.dummy2, b.dummy2);
  swap(a.__isset, b.__isset);
}

const char* QuoteRequest::ascii_fingerprint = "504CC738B7BF6DE7EBC19272D97E065C";
const uint8_t QuoteRequest::binary_fingerprint[16] = {0x50,0x4C,0xC7,0x38,0xB7,0xBF,0x6D,0xE7,0xEB,0xC1,0x92,0x72,0xD9,0x7E,0x06,0x5C};

uint32_t QuoteRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isEcho);
          this->__isset.isEcho = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->counter);
          this->__isset.counter = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->securityID);
          this->__isset.securityID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->applVersionID);
          this->__isset.applVersionID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->messageType);
          this->__isset.messageType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->senderCompID);
          this->__isset.senderCompID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->msgSeqNum);
          this->__isset.msgSeqNum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->sendingTime);
          this->__isset.sendingTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->quoteReqID);
          this->__isset.quoteReqID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->related.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readListBegin(_etype9, _size6);
            this->related.resize(_size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              xfer += this->related[_i10].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.related = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QuoteRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("QuoteRequest");

  xfer += oprot->writeFieldBegin("isEcho", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isEcho);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("counter", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->counter);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("securityID", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->securityID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applVersionID", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->applVersionID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("messageType", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->messageType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("senderCompID", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->senderCompID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("msgSeqNum", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->msgSeqNum);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sendingTime", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->sendingTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("quoteReqID", ::apache::thrift::protocol::T_DOUBLE, 9);
  xfer += oprot->writeDouble(this->quoteReqID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("related", ::apache::thrift::protocol::T_LIST, 10);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->related.size()));
    std::vector<RelatedSym> ::const_iterator _iter11;
    for (_iter11 = this->related.begin(); _iter11 != this->related.end(); ++_iter11)
    {
      xfer += (*_iter11).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QuoteRequest &a, QuoteRequest &b) {
  using ::std::swap;
  swap(a.isEcho, b.isEcho);
  swap(a.counter, b.counter);
  swap(a.securityID, b.securityID);
  swap(a.applVersionID, b.applVersionID);
  swap(a.messageType, b.messageType);
  swap(a.senderCompID, b.senderCompID);
  swap(a.msgSeqNum, b.msgSeqNum);
  swap(a.sendingTime, b.sendingTime);
  swap(a.quoteReqID, b.quoteReqID);
  swap(a.related, b.related);
  swap(a.__isset, b.__isset);
}

} // namespace
