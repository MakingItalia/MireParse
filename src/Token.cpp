#include "Token.h"

//Constructor
Token::Token(TokenType tokenType, void* objectValue)
{
    this->m_tokenType = tokenType;
    this->m_obectValue = objectValue;
}


Token::~Token()
{
    //dtor
}


std::string Token::ToString()
{

    return "";
}
