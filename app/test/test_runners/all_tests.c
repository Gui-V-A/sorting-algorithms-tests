#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Foo);
  RUN_TEST_GROUP(AlgorithmComplexityInputTests);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
