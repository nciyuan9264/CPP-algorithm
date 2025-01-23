#include "StringFunctions.hpp"
#include <algorithm>  // For std::transform
#include <cctype>     // For std::toupper

// 将字符串转为大写
std::string toUpperCase(const std::string& str)
{
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) -> char {
        return std::toupper(c);
    });
    return result;
}
