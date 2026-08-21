#include <gtest/gtest.h>

std::string convertInteger(const int input) {
    return "I";
}

TEST(RomanNumeral, one) {
    std::string result = convertInteger(1);
    ASSERT_EQ("I", result);
}