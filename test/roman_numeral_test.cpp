#include <gtest/gtest.h>
#include <roman_numeral.h>

TEST(RomanNumeral, One) {
    ASSERT_EQ("I", convertToRomanNumeral(1));
}

TEST(RomanNumeral, Two) {
    ASSERT_EQ("II", convertToRomanNumeral(2));
}

TEST(RomanNumeral, Three) {
    ASSERT_EQ("III", convertToRomanNumeral(3));
}