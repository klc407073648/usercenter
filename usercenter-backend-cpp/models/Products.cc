/**
 *
 *  Products.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Products.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::student;

const std::string Products::Cols::_product_no = "product_no";
const std::string Products::Cols::_name = "name";
const std::string Products::Cols::_price = "price";
const std::string Products::primaryKeyName = "";
const bool Products::hasPrimaryKey = false;
const std::string Products::tableName = "products";

const std::vector<typename Products::MetaData> Products::metaData_={
{"product_no","int32_t","integer",4,0,0,0},
{"name","std::string","text",0,0,0,0},
{"price","std::string","numeric",0,0,0,0}
};
const std::string &Products::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Products::Products(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["product_no"].isNull())
        {
            productNo_=std::make_shared<int32_t>(r["product_no"].as<int32_t>());
        }
        if(!r["name"].isNull())
        {
            name_=std::make_shared<std::string>(r["name"].as<std::string>());
        }
        if(!r["price"].isNull())
        {
            price_=std::make_shared<std::string>(r["price"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 3 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            productNo_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            name_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            price_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

Products::Products(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 3)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            productNo_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            price_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
}

Products::Products(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("product_no"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["product_no"].isNull())
        {
            productNo_=std::make_shared<int32_t>((int32_t)pJson["product_no"].asInt64());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("price"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["price"].isNull())
        {
            price_=std::make_shared<std::string>(pJson["price"].asString());
        }
    }
}

void Products::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 3)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            productNo_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            price_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
}

void Products::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("product_no"))
    {
        dirtyFlag_[0] = true;
        if(!pJson["product_no"].isNull())
        {
            productNo_=std::make_shared<int32_t>((int32_t)pJson["product_no"].asInt64());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("price"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["price"].isNull())
        {
            price_=std::make_shared<std::string>(pJson["price"].asString());
        }
    }
}

const int32_t &Products::getValueOfProductNo() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(productNo_)
        return *productNo_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Products::getProductNo() const noexcept
{
    return productNo_;
}
void Products::setProductNo(const int32_t &pProductNo) noexcept
{
    productNo_ = std::make_shared<int32_t>(pProductNo);
    dirtyFlag_[0] = true;
}
void Products::setProductNoToNull() noexcept
{
    productNo_.reset();
    dirtyFlag_[0] = true;
}

const std::string &Products::getValueOfName() const noexcept
{
    const static std::string defaultValue = std::string();
    if(name_)
        return *name_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Products::getName() const noexcept
{
    return name_;
}
void Products::setName(const std::string &pName) noexcept
{
    name_ = std::make_shared<std::string>(pName);
    dirtyFlag_[1] = true;
}
void Products::setName(std::string &&pName) noexcept
{
    name_ = std::make_shared<std::string>(std::move(pName));
    dirtyFlag_[1] = true;
}
void Products::setNameToNull() noexcept
{
    name_.reset();
    dirtyFlag_[1] = true;
}

const std::string &Products::getValueOfPrice() const noexcept
{
    const static std::string defaultValue = std::string();
    if(price_)
        return *price_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Products::getPrice() const noexcept
{
    return price_;
}
void Products::setPrice(const std::string &pPrice) noexcept
{
    price_ = std::make_shared<std::string>(pPrice);
    dirtyFlag_[2] = true;
}
void Products::setPrice(std::string &&pPrice) noexcept
{
    price_ = std::make_shared<std::string>(std::move(pPrice));
    dirtyFlag_[2] = true;
}
void Products::setPriceToNull() noexcept
{
    price_.reset();
    dirtyFlag_[2] = true;
}

void Products::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Products::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "product_no",
        "name",
        "price"
    };
    return inCols;
}

void Products::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getProductNo())
        {
            binder << getValueOfProductNo();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getPrice())
        {
            binder << getValueOfPrice();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Products::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[0])
    {
        ret.push_back(getColumnName(0));
    }
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    return ret;
}

void Products::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getProductNo())
        {
            binder << getValueOfProductNo();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getPrice())
        {
            binder << getValueOfPrice();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Products::toJson() const
{
    Json::Value ret;
    if(getProductNo())
    {
        ret["product_no"]=getValueOfProductNo();
    }
    else
    {
        ret["product_no"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getPrice())
    {
        ret["price"]=getValueOfPrice();
    }
    else
    {
        ret["price"]=Json::Value();
    }
    return ret;
}

Json::Value Products::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 3)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getProductNo())
            {
                ret[pMasqueradingVector[0]]=getValueOfProductNo();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getName())
            {
                ret[pMasqueradingVector[1]]=getValueOfName();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getPrice())
            {
                ret[pMasqueradingVector[2]]=getValueOfPrice();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getProductNo())
    {
        ret["product_no"]=getValueOfProductNo();
    }
    else
    {
        ret["product_no"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getPrice())
    {
        ret["price"]=getValueOfPrice();
    }
    else
    {
        ret["price"]=Json::Value();
    }
    return ret;
}

bool Products::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("product_no"))
    {
        if(!validJsonOfField(0, "product_no", pJson["product_no"], err, true))
            return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(1, "name", pJson["name"], err, true))
            return false;
    }
    if(pJson.isMember("price"))
    {
        if(!validJsonOfField(2, "price", pJson["price"], err, true))
            return false;
    }
    return true;
}
bool Products::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                  const std::vector<std::string> &pMasqueradingVector,
                                                  std::string &err)
{
    if(pMasqueradingVector.size() != 3)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Products::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("product_no"))
    {
        if(!validJsonOfField(0, "product_no", pJson["product_no"], err, false))
            return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(1, "name", pJson["name"], err, false))
            return false;
    }
    if(pJson.isMember("price"))
    {
        if(!validJsonOfField(2, "price", pJson["price"], err, false))
            return false;
    }
    return true;
}
bool Products::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                std::string &err)
{
    if(pMasqueradingVector.size() != 3)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Products::validJsonOfField(size_t index,
                                const std::string &fieldName,
                                const Json::Value &pJson,
                                std::string &err,
                                bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 2:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        default:
            err="Internal error in the server";
            return false;
            break;
    }
    return true;
}