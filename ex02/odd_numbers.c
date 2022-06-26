#include <stdio.h>

int main()
{
   int a, number[5], total=0;
   printf("\nInput the first number: ");
   scanf("%d", &number[0]);
   printf("\nInput the second number: ");
   scanf("%d", &number[1]);
   printf("\nInput the third number: ");
   scanf("%d", &number[2]);
   printf("\nInput the fourth number: ");
   scanf("%d", &number[3]);
   printf("\nInput the fifth number: ");
   scanf("%d", &number[4]);
   for (a = 0; a < 5; a++)  
{
   if ((number[a]%2) !=0)
      {
       total += number[a];
      }
 }
   printf("\nSum of all odd numbers: %d", total);
   printf("\n");
   return 0;
}
