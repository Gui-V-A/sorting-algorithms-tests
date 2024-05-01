#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(SortBehaviorTests);

TEST_SETUP(SortBehaviorTests)
{
}

TEST_TEAR_DOWN(SortBehaviorTests)
{
}

// Counting works only with positive integers
TEST(SortBehaviorTests, test_countingSort_withMinArraySize)
{
  int arr[] = {3, 0};
  int size = 2;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {0, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_countingSort_withMaxArraySize)
{
  int arr[] = {30, 0, 13, 35, 12, 14, 38, 26, 40, 31, 8, 13, 37, 5, 35, 11, 37, 3, 6, 8};
  int size = 20;
  char complexity[] = "On";
  int algorithm = COUNTING;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {0, 3, 5, 6, 8, 8, 11, 12, 13, 13, 14, 26, 30, 31, 35, 35, 37, 37, 38, 40};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Radix works only with positive integers
TEST(SortBehaviorTests, test_radixSort_withMinArraySize)
{
  int arr[] = {3, 0};
  int size = 2;
  char complexity[] = "On";
  int algorithm = RADIX;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {0, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_radixSort_withMaxArraySize)
{
  int arr[] = {30, 0, 13, 35, 12, 14, 38, 26, 40, 31, 8, 13, 37, 5, 35, 11, 37, 3, 6, 8};
  int size = 20;
  char complexity[] = "On";
  int algorithm = RADIX;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {0, 3, 5, 6, 8, 8, 11, 12, 13, 13, 14, 26, 30, 31, 35, 35, 37, 37, 38, 40};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Bubble works with positive and negative integers
TEST(SortBehaviorTests, test_bubbleSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "On2";
  int algorithm = BUBBLE;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_bubbleSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "On2";
  int algorithm = BUBBLE;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Insertion works with positive and negative integers
TEST(SortBehaviorTests, test_insertionSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "On2";
  int algorithm = INSERTION;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_insertionSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "On2";
  int algorithm = INSERTION;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Selection works with positive and negative integers
TEST(SortBehaviorTests, test_selectionSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "On2";
  int algorithm = SELECTION;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_selectionSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "On2";
  int algorithm = SELECTION;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Heap works with positive and negative integers
TEST(SortBehaviorTests, test_heapSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "Onlogn";
  int algorithm = HEAP;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_heapSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "Onlogn";
  int algorithm = HEAP;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Merge works with positive and negative integers
TEST(SortBehaviorTests, test_mergeSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "Onlogn";
  int algorithm = MERGE;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_mergeSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "Onlogn";
  int algorithm = MERGE;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

// Quick works with positive and negative integers
TEST(SortBehaviorTests, test_quickSort_withMinArraySize)
{
  int arr[] = {3, -3};
  int size = 2;
  char complexity[] = "Onlogn";
  int algorithm = QUICK;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-3, 3};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}

TEST(SortBehaviorTests, test_quickSort_withMaxArraySize)
{
  int arr[] = {-30, 25, -20, 5, 26, -14, 0, 25, 13, -25, 0, -18, 17, -17, 9, 2, -1, -20, -14, 16};
  int size = 20;
  char complexity[] = "Onlogn";
  int algorithm = QUICK;
  int expectedSuccess = 0;
  int expectedSortedArr[] = {-30, -25, -20, -20, -18, -17, -14, -14, -1, 0, 0, 2, 5, 9, 13, 16, 17, 25, 25, 26};

  TEST_ASSERT_EQUAL(expectedSuccess, sort(arr, size, complexity, algorithm));

for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(expectedSortedArr[i], arr[i]);
} 
}