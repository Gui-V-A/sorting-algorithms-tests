#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
  RUN_TEST_CASE(Foo, TestSort1);
  RUN_TEST_CASE(Foo, TestFoo2);
}

TEST_GROUP_RUNNER(ComplexityParameterTests)
{
  RUN_TEST_CASE(ComplexityParameterTests, test_counting_withRightComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_counting_withWrongComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_counting_withWrongComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_radix_withRightComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_radix_withWrongComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_radix_withWrongComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_bubble_withRightComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_bubble_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_bubble_withWrongComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_insertion_withRightComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_insertion_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_insertion_withWrongComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_selection_withRightComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_selection_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_selection_withWrongComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_heap_withRightComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_heap_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_heap_withWrongComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_merge_withRightComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_merge_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_merge_withWrongComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_quick_withRightComplexity_Onlogn);
  RUN_TEST_CASE(ComplexityParameterTests, test_quick_withWrongComplexity_On);
  RUN_TEST_CASE(ComplexityParameterTests, test_quick_withWrongComplexity_On2);
  RUN_TEST_CASE(ComplexityParameterTests, test_counting_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_radix_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_bubble_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_insertion_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_selection_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_heap_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_merge_withWrongComplexity_nonExistingCase);
  RUN_TEST_CASE(ComplexityParameterTests, test_quick_withWrongComplexity_nonExistingCase);
}

TEST_GROUP_RUNNER(AlgorithmParameterTests)
{
  RUN_TEST_CASE(AlgorithmParameterTests, test_algorithm_withNonExistingCase_positive);
  RUN_TEST_CASE(AlgorithmParameterTests, test_algorithm_withNonExistingCase_negative);
}


TEST_GROUP_RUNNER(LenghtParameterTests)
{
  RUN_TEST_CASE(LenghtParameterTests, test_vectorLenght_smallerThan_minLimit);
  RUN_TEST_CASE(LenghtParameterTests, test_vectorLenght_equalThan_minLimit);
  RUN_TEST_CASE(LenghtParameterTests, test_vectorLenght_equalThan_maxLimit)
  RUN_TEST_CASE(LenghtParameterTests, test_vectorLenght_greaterThan_maxLimit)
}