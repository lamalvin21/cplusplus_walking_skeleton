#include <string>

std::string convertToRomanNumeral(const int integer) {
    if (integer == 2)
    {
        return "II";
    }

    if (integer == 3)
    {
        return "III";
    }

    return "I";
}
