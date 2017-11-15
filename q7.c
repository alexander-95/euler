#include<stdio.h>
#include "maths.h"
int main()
{
  int len = 1000000;
  char prime[len];
  primeGenerator(len, &prime[0]);
  for(int i = 0, j = 0; i < len; i++)
  {
    if(prime[i])j++;
    if(j == 10001)
    {
      printf("%d\n", i);
      break;
    }
  }
}
