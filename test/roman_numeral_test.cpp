#include <gtest/gtest.h>
#include <roman_numeral.h>

#include <string>

struct RomanNumeralCase {
    int integer;
    std::string expected;
};

class RomanNumeralTest
    : public testing::TestWithParam<RomanNumeralCase> {
};

TEST_P(RomanNumeralTest, ConvertsInteger) {
    const RomanNumeralCase testCase = GetParam();

    ASSERT_EQ(testCase.expected,
              convertToRomanNumeral(testCase.integer));
}

INSTANTIATE_TEST_SUITE_P(
    BasicNumbers,
    RomanNumeralTest,
    testing::Values(
        RomanNumeralCase{1, "I"},
        RomanNumeralCase{2, "II"},
        RomanNumeralCase{3, "III"}
    )
);