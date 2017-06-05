#include "unity.h"
#include "determinetriangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_determinetriangle_invalid_triangle(void)
{
    TriangleSides aTriangle = arrange_ascending(3, 9, 2);
    printf("short1 :%d\n",aTriangle.short1 );
    printf("short2 :%d\n",aTriangle.short2 );
    printf("long1: %d\n",aTriangle.long1 );
    TEST_ASSERT_EQUAL_STRING("invalid", determine_type_and_validity_triangle(-7, -6, 6));
    TEST_ASSERT_EQUAL_STRING("invalid", determine_type_and_validity_triangle(7, 1, 2));
}
void test_getValidityTriangle_input_neg7_neg6_6_expected_invalid(void){
  TEST_ASSERT_EQUAL_STRING("invalid", determine_type_and_validity_triangle(-7, -6, 6));
}

void test_determinetriangle_accute_triangle(void)
{
    TEST_ASSERT_EQUAL_STRING("accute", determine_type_and_validity_triangle(8, 4, 5));
    TEST_ASSERT_EQUAL_STRING("accute", determine_type_and_validity_triangle(4, 8, 5));

}

void test_determinetriangle_obtuse_triangle(void)
{
    TEST_ASSERT_EQUAL_STRING("obtuse", determine_type_and_validity_triangle(8, 6, 7));
    TEST_ASSERT_EQUAL_STRING("obtuse", determine_type_and_validity_triangle(7, 6, 8));
}

void test_determinetriangle_right_angle_triangle(void)
{
    TEST_ASSERT_EQUAL_STRING("right_angle", determine_type_and_validity_triangle(3, 4, 5));
    TEST_ASSERT_EQUAL_STRING("right_angle", determine_type_and_validity_triangle(5, 3, 4));
}
