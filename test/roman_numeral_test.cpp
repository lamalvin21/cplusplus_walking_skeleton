#include <gtest/gtest.h>
#include <roman_numeral.h>
#include <string>

TEST(RomanNumeral, one) {
    std::string result = convertToRomanNumeral(1);
    ASSERT_EQ("I", result);
}

TEST(RomanNumeral, Two) {
    const std::string result = convertToRomanNumeral(2);
    ASSERT_EQ("II", result);
}
