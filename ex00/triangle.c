#include <stdio.h>

int main()
{
  float x, y, z, P;
  printf("Input the first number: ");
  scanf("%f", &x);
  printf("Input the second number: ");
  scanf("%f", &y);
  printf("Input the third number: "); 
  scanf("%f", &z);
   
  if (x < (y+z) && y < (x+z) && z < (y+x))
   {
   P = x+y+z;  
   printf("\nPerimeter = %.1f\n", P);
  }
  else
  {
    printf (" NOT possible to create a triangle..!");
  } 
}
