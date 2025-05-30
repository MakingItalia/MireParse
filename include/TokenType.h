#ifndef TOKENTYPE_H
#define TOKENTYPE_H

#pragma once

#include <string>
#include <list>
#include <iostream>

//===========================

#ifdef SHADERLIB_EXPORTS
#define SHADER_API __declspec(dllexport)
#else
#define SHADER_API __declspec(dllimport)
#endif // SHADERLIB_EXPORTS

//============================================= VALUE TYPE

SHADER_API enum class ValueType {
    NONE,  // Aggiunto per inizializzazione di default
    Identifier,
    Integer,
    Boolean,
    String,
    Equals,
    NotEquials,
    Greater,
    Less,
    INCLUDE,
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
    WHILE,
    ENDWHILE,
    CALL,
    BLOCK,
    ENDBLOCK,
    YIELD
};

//=========================================== TOKEN TYPE

SHADER_API class TokenType {
public:

    //Implicit Conversion
    TokenType() : value(nullptr), type(ValueType::NONE) {}
    TokenType(int val) : type(ValueType::Integer) { value = new int(val); }
    TokenType(float val) : type(ValueType::Boolean) { value = new bool(val); }
    TokenType(std::string val) : type(ValueType::String) { value = new std::string(val); }

    //Clear Values
    void clear();

    //Destructor
    virtual ~TokenType() { clear(); };

    //Getter
    ValueType getType() const { return type; }

protected:

private:
    void* value;
    ValueType type;
};

#endif // TOKENTYPE_H
