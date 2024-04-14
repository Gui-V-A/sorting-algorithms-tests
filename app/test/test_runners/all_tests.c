#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Foo);
  RUN_TEST_GROUP(AlgorithmComplexityInputTests);
  RUN_TEST_GROUP(LenghtParameterTests);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
