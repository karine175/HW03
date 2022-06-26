# include <stdio.h>

int main()
{
int x, y;
printf("Input the values for X and Y coordinate: ");
scanf("%d%d", &x, &y);
if(x > 0 && y > 0)
printf("\nThe coordinate point (%d, %d) lies in the first quandrant.\n", x, y);
else if(x < 0 && y > 0)
printf("\nThe coordinate point (%d, %d) lies in the second quandrant.\n", x, y);
else if(x < 0 && y < 0)
printf("\nThe coordinate point (%d, %d) lies in the third quandrant.\n", x, y);
else if(x > 0 && y < 0)
printf("\nThe coordinate point (%d, %d) lies in the fourth quandrant.\n", x, y);
return 0;
}
