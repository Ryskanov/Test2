#include "pch.h"
#include "Test2.h" 
#include <algorithm>
#include <string>

std::string upper(std::string text)
{
    std::transform(text.begin(), text.end(), text.begin(),std::toupper);
    return text;
}