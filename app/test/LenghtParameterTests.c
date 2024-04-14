#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(LenghtParameterTests);

TEST_SETUP(LenghtParameterTests)
{
}

TEST_TEAR_DOWN(LenghtParameterTests)
{
}

TEST(LenghtParameterTests, test_vectorLenght_smallerThan_minLimit)
{
  int arr[] = {10};
  int size = 1;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(LenghtParameterTests, test_vectorLenght_equalThan_minLimit)
{
  int arr[] = {10, 8};
  int size = 2;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(LenghtParameterTests, test_vectorLenght_equalThan_maxLimit)
{
  int arr[] = {10, 8, 3, 2, 11, 40, 32, 45, 21, 18, 1, 4, 12, 15, 22, 25, 30, 31, 19, 44};
  int size = 20;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(LenghtParameterTests, test_vectorLenght_greaterThan_maxLimit)
{
  int arr[] = {10, 8, 3, 2, 11, 40, 32, 45, 21, 18, 1, 4, 12, 15, 22, 25, 30, 31, 19, 44, 45};
  int size = 21;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}