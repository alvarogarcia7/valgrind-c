#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "CuTest.h"

#include "fizzbuzz.h"


void Test_Multiples_of_3_are_translated_to_Fizz(CuTest* tc)
{

    const char* expected = "Fizz";
    char* actual = FizzBuzz(3);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_any_multiple_of_3_are_translated_to_Fizz(CuTest* tc)
{

    const char* expected = "Fizz";
    char* actual = FizzBuzz(6);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_Multiples_of_5_are_translated_to_Buzz(CuTest* tc)
{

    const char* expected = "Buzz";
    char* actual = FizzBuzz(5);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_any_multiple_of_5_are_translated_to_Buzz(CuTest* tc)
{

    const char* expected = "Buzz";
    char* actual = FizzBuzz(10);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_number_not_multiple_is_turned_into_its_own_string(CuTest* tc)
{

    const char* expected = "2";
    char* actual = FizzBuzz(2);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_any_number_not_multiple_is_turned_into_its_own_string(CuTest* tc)
{

    const char* expected = "1";
    char* actual = FizzBuzz(1);

	CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_any_number_not_multiple_is_turned_into_its_own_string_case_2(CuTest* tc)
{

    const char* expected = "2";
    char* actual = FizzBuzz(2);

    CuAssertStrEquals(tc, expected, actual);

    free(actual);
}

void Test_return_all_fizzBuzz_translations_from_1_to_3 (CuTest* tc) 
{
    const char* expected[] = { "1", "2", "Fizz"};
    char** actual = FizzBuzzRange(1, 3);

    for (int i = 0; i < sizeof(expected)/sizeof(char*); i++) {
        CuAssertStrEquals(tc, expected[i], actual[i]);
    }

    for (int i = 0; i < sizeof(expected)/sizeof(char*); i++) {
        free(actual[i]);
    }
    free(actual);
}

void Test_return_all_fizzBuzz_translations_from_4_6 (CuTest* tc) 
{
    const char* expected[] = { "4", "Buzz", "Fizz"};
    char** actual = FizzBuzzRange(4, 6);

    for (int i = 0; i < sizeof(expected)/sizeof(char*); i++) {
        CuAssertStrEquals(tc, expected[i], actual[i]);
    }

    for (int i = 0; i < sizeof(expected)/sizeof(char*); i++) {
        free(actual[i]);
    }
    free(actual);
}
