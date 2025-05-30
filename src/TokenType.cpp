#include "TokenType.h"




//@brief Delete Pointers value
void TokenType::clear()
{
    switch(type)
    {
        case ValueType::Integer :
            delete static_cast<int*>(value);
        break;
        case ValueType::Boolean :
            delete static_cast<bool*>(value);
        break;
        case ValueType::String :
            delete static_cast<std::string*>(value);
        break;
    }
}
