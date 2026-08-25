#include <string>

std::string convertToRomanNumeral(int integer) {
    std::string result = {};

    if (integer >= 5)
    {
        integer -= 5;
        result = "V";
    }

    if (integer == 4)
    {
        return {"IV"};
    }

    result += std::string(integer, 'I');
    return result;
}
