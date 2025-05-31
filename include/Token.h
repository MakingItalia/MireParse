#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "Export.h"
#include "TokenType.h"

class SHADER_API Token {
public:
    Token(TokenType tokenType, void* objectValue);
    ~Token();

    std::string ToString();
    TokenType getType() const;

private:
    TokenType m_tokenType;
    void* m_objectValue;
};

#endif // TOKEN_H
