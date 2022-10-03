#include<stdio.h>
void main()
{
 int matrix_2[2][2]={{3,5},{2,6}},r1,r2,r3,r4;
 int matrix_3[3][3]={{3,5,1},{2,6,7},{1,7,3}};
 //2*2 Matrix Square
 r1=(matrix_2[0][0]*matrix_2[0][0])+(matrix_2[0][1]*matrix_2[1][0]);
 r2=(matrix_2[0][0]*matrix_2[0][1])+(matrix_2[0][1]*matrix_2[1][1]);
 r3=(matrix_2[1][0]*matrix_2[0][0])+(matrix_2[1][1]*matrix_2[1][0]);
 r4=(matrix_2[1][0]*matrix_2[0][1])+(matrix_2[1][1]*matrix_2[1][1]);
 printf("Matrix Square(2*2):
 %d %d 
 %d %d",r1,r2,r3,r4);
//3*3 Matrix Square
 int x11 = (matrix_3[0][0]* matrix_3[0][0]) + (matrix_3[0][1] * matrix_3[1][0]) +  (matrix_3[0][2]* matrix_3[2][0]);
 int x12 = (matrix_3[0][0]* matrix_3[0][1]) + (matrix_3[0][1] * matrix_3[1][1]) +  (matrix_3[0][2]* matrix_3[2][2]);
 int x13 = (matrix_3[0][0]* matrix_3[0][2]) + (matrix_3[0][1] * matrix_3[1][2]) +  (matrix_3[0][2]* matrix_3[2][2]);
 int x21 = (matrix_3[1][0]* matrix_3[0][0]) + (matrix_3[1][1] * matrix_3[1][0]) +  (matrix_3[1][2]* matrix_3[2][0]);
 int x22 = (matrix_3[1][0]* matrix_3[0][1]) + (matrix_3[1][1] * matrix_3[1][1]) +  (matrix_3[1][2]* matrix_3[2][1]);
 int x23 = (matrix_3[1][0]* matrix_3[0][2]) + (matrix_3[1][1] * matrix_3[1][2]) +  (matrix_3[1][2]* matrix_3[2][2]);
 int x31 = (matrix_3[2][0]* matrix_3[0][0]) + (matrix_3[2][1] * matrix_3[1][0]) +  (matrix_3[2][2]* matrix_3[2][0]);
 int x32 = (matrix_3[2][0]* matrix_3[0][1]) + (matrix_3[2][1] * matrix_3[1][1]) +  (matrix_3[2][2]* matrix_3[2][1]);
 int x33 = (matrix_3[2][0]* matrix_3[0][2]) + (matrix_3[2][1] * matrix_3[1][2]) +  (matrix_3[2][2]* matrix_3[2][2]);
 printf("
Matrix Square(3*3):
 %d %d %d
 %d %d %d
 %d %d %d",x11,x12,x13,x21,x22,x23,x31,x32,x33);
}
