#ifndef SCRIPTEXCEPTION_H
#define SCRIPTEXCEPTION_H

#include <string>
#include <exception>

class ScriptException : public std::exception
{
    public:
        ScriptException(const std::string &message);


    protected:

    private:
        std::string m_strMessage;
        std::exception m_exceptionInner;
        //TODO: Impelements Statement
};

#endif // SCRIPTEXCEPTION_H
