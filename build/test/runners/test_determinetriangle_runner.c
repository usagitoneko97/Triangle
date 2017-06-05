/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_determinetriangle_invalid_triangle(void);
extern void test_determinetriangle_accute_triangle(void);
extern void test_determinetriangle_obtuse_triangle(void);
extern void test_determinetriangle_right_angle_triangle(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_determinetriangle.c");
  RUN_TEST(test_determinetriangle_invalid_triangle, 12);
  RUN_TEST(test_determinetriangle_accute_triangle, 22);
  RUN_TEST(test_determinetriangle_obtuse_triangle, 29);
  RUN_TEST(test_determinetriangle_right_angle_triangle, 35);

  return (UnityEnd());
}