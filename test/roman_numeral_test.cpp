#include <gtest/gtest.h>
#include <roman_numeral.h>

TEST(RomanNumeral, one) {
    std::string result = convertInteger(1);
    ASSERT_EQ("I", result);
}