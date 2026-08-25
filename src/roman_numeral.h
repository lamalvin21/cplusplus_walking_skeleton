#include <string>

std::string convertToRomanNumeral(int integer) {
    std::string result = {};

    if (integer == 10)
    {
        return {"X"};
    }

    if (integer == 9)
    {
        return {"IX"};
    }

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
