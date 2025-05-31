#include "TokenType.h"

TokenType::TokenType() : m_type(ValueType::Null), iValue(0) {}

TokenType::TokenType(int value) : m_type(ValueType::Integer), iValue(value) { m_objectValue = new int(value); }

TokenType::TokenType(float value) : m_type(ValueType::Boolean), fValue(value) { m_objectValue = new float(value); }

TokenType::TokenType(bool value) : m_type(ValueType::Boolean), fValue(value) { m_objectValue = new bool(value); }

TokenType::TokenType(const std::string& value) : m_type(ValueType::String), sValue(new std::string(value)) { m_objectValue = new std::string(value); }


//Destructor
TokenType::~TokenType()
{
    clear();

      if (m_objectValue) {
        switch (m_type) {
            case ValueType::Integer: delete static_cast<int*>(m_objectValue); break;
            case ValueType::Float: delete static_cast<float*>(m_objectValue); break;
            case ValueType::Boolean: delete static_cast<bool*>(m_objectValue); break;
            case ValueType::String: delete static_cast<std::string*>(m_objectValue); break;
            default: break;
        }
    }
}


///Clear values
void TokenType::clear() {
    if (m_type == ValueType::String && sValue != nullptr) {
        delete sValue;
        sValue = nullptr;
    }
    m_type = ValueType::Null;
    iValue = 0;
}

///@brief Get Native Type
ValueType TokenType::getType() const {
    return m_type;
}


///@brief Get ValueType to String
std::string TokenType::ToString()
{
    if(m_type == ValueType::Integer)
    {
        return "INT";
    }

    if(m_type == ValueType::Boolean)
    {
        return "Bool";
    }

    if(m_type == ValueType::Float)
    {
        return "Float";
    }
}


///@brief Get Value from current Type
void* TokenType::GetValue()
{
    //Typeof Int
    if(m_type == ValueType::Integer)
    {
        return static_cast<int*>(m_objectValue);
    }

    //Typeof String
    if(m_type == ValueType::String)
    {
        return static_cast<std::string*>(m_objectValue);
    }

    //Typeof Bool
    if(m_type == ValueType::Boolean)
    {
        return static_cast<bool*>(m_objectValue);
    }

    //Typeof Float
    if(m_type == ValueType::Float)
    {
        return static_cast<float*>(m_objectValue);
    }

}
