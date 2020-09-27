#pragma once 
#include <algorithm>
#include <string>

#ifdef TEST2_EXPORTS  
#define TEST2_EXPORTS_API __declspec(dllexport)   
#else  
#define TEST2_EXPORTS_API __declspec(dllimport)   
#endif  

#include <string>

extern "C++"
{
    TEST2_EXPORTS_API std::string upper(std::string text);
}