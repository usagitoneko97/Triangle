#ifndef _DETERMINETRIANGLE_H
#define _DETERMINETRIANGLE_H


struct TriangleSides{
  int short1, short2, long1;
};
typedef struct TriangleSides TriangleSides;

char* determine_type_and_validity_triangle(int v1, int v2, int v3);
TriangleSides arrange_ascending( int v1, int v2, int v3);
char* get_triangle_type(TriangleSides aTriangle);

int square (int a);

#endif // _DETERMINETRIANGLE_H
