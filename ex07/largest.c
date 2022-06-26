#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Input the values of three numbers : ");
  scanf("%d%d%d", &a, &b, &c );
  printf("\n1st number = %d,     2nd number = %d,     3rd number = %d\n", a, b, c);
  if(a > b && a > c)
    printf("The 1st number is the greatest among three.");
  if(b > a && b > c)
    printf("The 2nd number is the greatest among three.");
  if(c > a && c > b)
    printf("The 3rd number is the greatest among three.");
  printf("\n");
return 0;
}
