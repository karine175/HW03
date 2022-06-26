#include <stdio.h>

int main()
{
  char ab;
  printf("Input any alphabet : ");
  scanf("%c", &ab);
  if (ab == 'a' || ab == 'i' || ab == 'o' || ab == 'u' || ab == 'e' )
    printf("The alphabet is a vowle.\n");
  else
    printf("The alphabet is a consonant.\n");
return 0;
}
