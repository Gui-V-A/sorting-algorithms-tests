#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestSort1)
{
  // All of these should pass
  // TEST_ASSERT_EQUAL(-2, foo(1,2));
  // TEST_ASSERT_EQUAL(-1, foo(2,2));
  int size = 5;
  int arr[] = {10, 4, 23, 3, 1};
  int exp[] = {1, 3, 4, 10, 23};
  char str[] = "On";

  TEST_ASSERT_EQUAL(0, sort(arr, size, str, 0));

  for(int i = 0; i < size; i++) {
    TEST_ASSERT_EQUAL(exp[i], arr[i]);
    printf("%d ", arr[i]);
    // printf("\n");
} 
}

TEST(Foo, TestFoo2)
{
  // This test will fail
  //TEST_ASSERT_EQUAL(2, foo(1,2));
  // This test will pass
  // TEST_ASSERT_EQUAL(-1, foo(2,2));
}
