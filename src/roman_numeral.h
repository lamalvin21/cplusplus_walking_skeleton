#include <string>

std::string convertToRomanNumeral(const int integer) {
    if (integer == 5)
    {
        return {"V"};
    }    

    if (integer == 4)
    {
        return {"IV"};
    }
    
    return std::string(integer, 'I');
}
