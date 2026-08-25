#include <string>

void concatenateAdjacentNumerals(const int higherNumber, int &integer, std::string &result) {
    while (integer >= higherNumber)
    {
        integer -= higherNumber;
        result += "L";
    }

    if (integer >= higherNumber - 10)
    {
        integer -= higherNumber - 10;
        result += "X";
        result += "L";
    }
}

std::string convertToRomanNumeral(int integer) {
    std::string result = {};

    concatenateAdjacentNumerals(50, integer, result);

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
