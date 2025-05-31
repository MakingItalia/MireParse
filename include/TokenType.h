#ifndef TOKENTYPE_H
#define TOKENTYPE_H

#include "Export.h"
#include <string>

enum class ValueType {
           Null,
     Identifier,
        Integer,
        Float,
        Boolean,
        String,
        Equals,
        NotEquals,
        Greater,
        Less,
        INCLUDE,
        SETGLOBAL,
        SET,
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE,
        TO,
        FROM,
        BY,
        IF,
        THEN,
        ELSE,
        ENDIF,
        WHILE,
        ENDWHILE,
        CALL,
        BLOCK,
        ENDBLOCK,
        YIELD };

class SHADER_API TokenType {
public:
    TokenType();
    TokenType(int value);
    TokenType(float value);
    TokenType(bool value);
    TokenType(const std::string& value);
    virtual ~TokenType();

    void clear();
    ValueType getType() const;
    std::string ToString();

    //Get Generic Value
    void* GetValue();

    template <typename T>
    T GetValueAs() { return *static_cast<T*>(m_objectValue); }

private:
    ValueType m_type;
    void* m_objectValue;

    union {
        int iValue;
        float fValue;
        std::string* sValue;
    };
};

#endif // TOKENTYPE_H
