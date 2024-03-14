#pragma once

#include "TokenTypes/TokenTypes.hpp"
#include <string>

class Token
{
public:
    Token(ITokenType type, std::string data);

private:
    ITokenType _type;
};