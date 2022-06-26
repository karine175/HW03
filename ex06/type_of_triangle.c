#include <stdio.h>

int main()
{
 int a, b, c;
 printf("Input three sides of triangle: ");
 scanf("%d%d%d", &a, &b, &c);
 if (a == b && b == c)
    printf("This is a equilateral triangle.\n");
 else if(a == b || b == c || a == c)
    printf("This is a isosceles triangle.\n");
 else
    printf("This is a scalane triangle.\n");
 return 0;
}

