#include "Token.h"

Token::Token(TokenType tokenType, void* objectValue)
    : m_tokenType(tokenType), m_objectValue(objectValue) {}

Token::~Token() {
    // TODO: Manage Destructor
}

std::string Token::ToString() {
    // TODO: Need to Implement 
    return "";
}

TokenType Token::getType() const {
    return m_tokenType;
}
