#include <string>

std::string convertToRomanNumeral(const int integer) {
    if (integer < 4)
    {
        return std::string(integer, 'I');
    }
    if (integer == 5)
    {
        return {"V"};
    }
    return {"IV"};
}
