#include <string>

void concatenateAdjacentNumerals(const int higherInteger, const std::string &higherNumeral, const int lowerInteger, const std::string &lowerNumeral, int &integer, std::string &result) {
    while (integer >= higherInteger)
    {
        integer -= higherInteger;
        result += higherNumeral;
    }

    if (integer >= higherInteger - lowerInteger)
    {
        integer -= higherInteger - lowerInteger;
        result += lowerNumeral;
        result += higherNumeral;
    }
}

std::string convertToRomanNumeral(int integer) {
    std::string result = {};

    concatenateAdjacentNumerals(50, "L", 10, "X", integer, result);

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
