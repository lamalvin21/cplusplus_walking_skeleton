#include <string>

void concatenateAdjacentNumerals(int &integer, std::string &result) {
    while (integer >= 50)
    {
        integer -= 50;
        result += "L";
    }

    if (integer >= 40)
    {
        integer -= 40;
        result += "XL";
    }
}
std::string convertToRomanNumeral(int integer) {
    std::string result = {};

    concatenateAdjacentNumerals(integer, result);

    while (integer >= 10)
    {
        integer -= 10;
        result += "X";
    }

    if (integer == 9)
    {
        integer -= 9;
        result += "IX";
    }

    while (integer >= 5)
    {
        integer -= 5;
        result += "V";
    }

    if (integer == 4)
    {
        integer -= 4;
        result += "IV";
    }

    result += std::string(integer, 'I');
    return result;
}
