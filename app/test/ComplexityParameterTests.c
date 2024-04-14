#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ComplexityParameterTests);

TEST_SETUP(ComplexityParameterTests)
{
}

TEST_TEAR_DOWN(ComplexityParameterTests)
{
}

// COUNTING ALGORITHM
TEST(ComplexityParameterTests, test_counting_withRightComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_counting_withWrongComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = COUNTING;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_counting_withWrongComplexity_Onlogn)
{
  int size = 5;
  int arr[] = {10, 4, 23, 3, 1};
  char complexity[] = "Onlogn";
  int algorithm = COUNTING;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// RADIX ALGORITHM
TEST(ComplexityParameterTests, test_radix_withRightComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = RADIX;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_radix_withWrongComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = RADIX;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_radix_withWrongComplexity_Onlogn)
{
  int size = 5;
  int arr[] = {10, 4, 23, 3, 1};
  char complexity[] = "Onlogn";
  int algorithm = RADIX;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// BUBBLE ALGORITHM
TEST(ComplexityParameterTests, test_bubble_withRightComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = BUBBLE;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_bubble_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = BUBBLE;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_bubble_withWrongComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = BUBBLE;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// INSERTION ALGORITHM
TEST(ComplexityParameterTests, test_insertion_withRightComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = INSERTION;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_insertion_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = INSERTION;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_insertion_withWrongComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = INSERTION;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// SELECTION ALGORITHM
TEST(ComplexityParameterTests, test_selection_withRightComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = SELECTION;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_selection_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = SELECTION;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_selection_withWrongComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = SELECTION;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// HEAP ALGORITHM
TEST(ComplexityParameterTests, test_heap_withRightComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = HEAP;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_heap_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = HEAP;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_heap_withWrongComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = HEAP;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// MERGE ALGORITHM
TEST(ComplexityParameterTests, test_merge_withRightComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = MERGE;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_merge_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = MERGE;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_merge_withWrongComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = MERGE;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// QUICK ALGORITHM
TEST(ComplexityParameterTests, test_quick_withRightComplexity_Onlogn)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "Onlogn";
  int algorithm = QUICK;
  int expectedSuccess = 0;

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_quick_withWrongComplexity_On)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On";
  int algorithm = QUICK;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_quick_withWrongComplexity_On2)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "On2";
  int algorithm = QUICK;
  int expectedFail = 1;

  TEST_ASSERT_EQUAL(expectedFail, sort(arr, size, complexity, algorithm));
}

// NON EXISTING COMPLEXITY (DEFAULT CASE)
TEST(ComplexityParameterTests, test_counting_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = COUNTING;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_radix_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = RADIX;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_bubble_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = BUBBLE;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_insertion_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = INSERTION;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_selection_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = SELECTION;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_heap_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = HEAP;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_merge_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = MERGE;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}

TEST(ComplexityParameterTests, test_quick_withWrongComplexity_nonExistingCase)
{
  int arr[] = {10, 4, 23, 3, 1};
  int size = 5;
  char complexity[] = "NonExistingComplexity";
  int algorithm = QUICK;
  int expectedError = 1;

  TEST_ASSERT_EQUAL(expectedError, sort(arr, size, complexity, algorithm));
}