#include <stdio.h>
 
int main(void)
{
  int n=5, c, k;
 
  printf("Enter number of rows\n");
  for (c = 1; c <= n; c++)
  {
    for(k = 1; k <= c; k++)
      printf("*");
 
    printf("\n");
  }
 
  return 0;
}
