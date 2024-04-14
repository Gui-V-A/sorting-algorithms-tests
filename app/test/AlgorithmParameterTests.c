#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(AlgorithmParameterTests);

TEST_SETUP(AlgorithmParameterTests)
{
}

TEST_TEAR_DOWN(AlgorithmParameterTests)
{
}

// THESE TESTS THE EDGING CASES
TEST(AlgorithmParameterTests, test_algorithm_withNonExistingCase_positive)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = 8;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(AlgorithmParameterTests, test_algorithm_withNonExistingCase_negative)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = -1;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}