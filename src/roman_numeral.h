#include <string>

std::string convertToRomanNumeral(const int integer) {
    if (integer < 4)
    {
        return std::string(integer, 'I');
    }

    return {"IV"};
}
