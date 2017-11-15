#include<stdio.h>
#include "maths.h"
int main()
{
  int len = 2000000;
  long total = 0;
  char prime[len];
  primeGenerator(len, &prime[0]);
  for(int i = 0; i < len; i++)
  {
    if(prime[i])total+=(long)i;
  }
  printf("%ld\n", total);
}
