#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include <list>
#include <map>
#include "TokenType.h"
#include "Token.h"

//====================================   ENUMERATORS   ===========================

enum ParseState
{
        Space,
        Identifier,
        NotEqual,
        Integer,
        Float,
        Boolean,
        String,
        StringEscape
};

///@brief Enumerated type representing the type of a particular script statement.
enum StatementType
{
    ///@param Blank line
    BlankLine,

    ///@param Comment line
    Comment,

    ///@param Control statement such as IF-THEN, CALL or WHILE
    Control,

    ///@param Custom command.
    Command

};

//===============================================================================

class Statement
{
    public:
        Statement();
        virtual ~Statement();

    protected:

    private:
        std::map<std::string, TokenType> s_dictTokenTypes;
        //TODO: Implement Script
        int m_iLine;
        StatementType m_statementeType;
        std::list<Token> m_listTokens;
};

#endif // STATEMENT_H
