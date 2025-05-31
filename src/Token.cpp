#include "Token.h"

Token::Token(TokenType tokenType, void* objectValue)
    : m_tokenType(tokenType), m_objectValue(objectValue) {}

Token::~Token() {
    // TODO: Gestire distruzione se necessario
}

std::string Token::ToString() {
    // TODO: Implementare come serve
    return "";
}

TokenType Token::getType() const {
    return m_tokenType;
}
