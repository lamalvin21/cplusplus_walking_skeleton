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
        RomanNumeralCase{3, "III"},
        RomanNumeralCase{4, "IV"},
        RomanNumeralCase{5, "V"},
        RomanNumeralCase{6, "VI"},
        RomanNumeralCase{9, "IX"},
        RomanNumeralCase{10, "X"},
        RomanNumeralCase{11, "XI"},
        RomanNumeralCase{14, "XIV"},
        RomanNumeralCase{19, "XIX"},
        RomanNumeralCase{20, "XX"},
        RomanNumeralCase{40, "XL"},
        RomanNumeralCase{41, "XLI"},
        RomanNumeralCase{50, "L"}
    )
);
