#include <stdio.h>
 
int main()
{
   int x, y;
   printf("\nInput an integer: ");
   scanf("%d", &x);
   printf("All the divisor of %d are: \n", x);
   for(y = 1; y <= x; y++)
    {
     if ((x%y) == 0)
      {
       printf("%d", y);
       printf("\n");
      }
    }
    return 0;
}
