#include "determinetriangle.h"


TriangleSides arrange_ascending(int v1, int v2, int v3){
  TriangleSides aTriangle;
  if(v1>v2 && v1>v3){
    aTriangle.long1 = v1;
    aTriangle.short1 = v2;
    aTriangle.short2 = v3;
  }

  if(v2>v1 && v2>v3){
    aTriangle.long1 = v2;
    aTriangle.short1 = v1;
    aTriangle.short2 = v3;
  }
  if(v3>v2 && v3>v1){
    aTriangle.long1 = v3;
    aTriangle.short1 = v2;
    aTriangle.short2 = v1;
  }
  return aTriangle;
}
char* determine_type_and_validity_triangle(int v1, int v2, int v3){
  TriangleSides aTriangle;
  if(v1<0 || v2<0 || v3<0){
    return "invalid";
  }
  aTriangle = arrange_ascending(v1, v2, v3);

  if((aTriangle.short1+aTriangle.short2)<aTriangle.long1){
    return "invalid";
  }
    return get_triangle_type(aTriangle);
}

char* get_triangle_type(TriangleSides aTriangle){
  if(square(aTriangle.short1) + square(aTriangle.short2) == square(aTriangle.long1)){
    return "right_angle";
  }
  else if(square(aTriangle.short1) + square(aTriangle.short2) < square(aTriangle.long1)){
    return "accute";
  }
  else if(square(aTriangle.short1) + square(aTriangle.short2) > square(aTriangle.long1)){
    return "obtuse";
  }
  else{
    return "unknown_ERROR";
  }
}
int square (int a){
  int result;
  result = a*a;
  return result;
}
