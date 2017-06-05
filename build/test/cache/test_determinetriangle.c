#include "build/temp/_test_determinetriangle.c"
#include "determinetriangle.h"
#include "unity.h"


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

    UnityAssertEqualString((const char*)(("invalid")), (const char*)((determine_type_and_validity_triangle(-7, -6, 6))), (

   ((void *)0)

   ), (UNITY_UINT)(18));

    UnityAssertEqualString((const char*)(("invalid")), (const char*)((determine_type_and_validity_triangle(7, 1, 2))), (

   ((void *)0)

   ), (UNITY_UINT)(19));

}

void test_getValidityTriangle_input_neg7_neg6_6_expected_invalid(void){

  UnityAssertEqualString((const char*)(("invalid")), (const char*)((determine_type_and_validity_triangle(-7, -6, 6))), (

 ((void *)0)

 ), (UNITY_UINT)(22));

}



void test_determinetriangle_accute_triangle(void)

{

    UnityAssertEqualString((const char*)(("accute")), (const char*)((determine_type_and_validity_triangle(8, 4, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(27));

    UnityAssertEqualString((const char*)(("accute")), (const char*)((determine_type_and_validity_triangle(4, 8, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(28));



}



void test_determinetriangle_obtuse_triangle(void)

{

    UnityAssertEqualString((const char*)(("obtuse")), (const char*)((determine_type_and_validity_triangle(8, 6, 7))), (

   ((void *)0)

   ), (UNITY_UINT)(34));

    UnityAssertEqualString((const char*)(("obtuse")), (const char*)((determine_type_and_validity_triangle(7, 6, 8))), (

   ((void *)0)

   ), (UNITY_UINT)(35));

}



void test_determinetriangle_right_angle_triangle(void)

{

    UnityAssertEqualString((const char*)(("right_angle")), (const char*)((determine_type_and_validity_triangle(3, 4, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(40));

    UnityAssertEqualString((const char*)(("right_angle")), (const char*)((determine_type_and_validity_triangle(5, 3, 4))), (

   ((void *)0)

   ), (UNITY_UINT)(41));

}
