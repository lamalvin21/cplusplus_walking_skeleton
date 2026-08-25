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

    concatenateAdjacentNumerals(10, "X", 1, "I", integer, result);

    concatenateAdjacentNumerals(5, "V", 1, "I", integer, result);

    concatenateAdjacentNumerals(1, "I", 0, "", integer, result);

    return result;
}
