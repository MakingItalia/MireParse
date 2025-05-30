#ifndef TOKEN_H
#define TOKEN_H

#pragma once

#include <string>
#include <list>
#include <iostream>
#include "tokentype.h"

//===========================

#ifdef SHADERLIB_EXPORTS
#define SHADER_API __declspec(dllexport)
#else
#define SHADER_API __declspec(dllimport)
#endif // SHADERLIB_EXPORTS



SHADER_API class Token
{
    public:
        SHADER_API Token(TokenType tokenType, void* objectValue);
        std::string ToString();

        virtual ~Token();

    protected:

    private:
    TokenType m_tokenType;
    void* m_obectValue;

};


#endif // TOKEN_H
