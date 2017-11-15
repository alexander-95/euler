#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int numFactors(long num)
{
  long limit = num;
  int factors = 0;
  for(long i = 1; i < limit; i++)
  {
    if(num % i == 0)
    {
      factors+=2;
      limit = num / i;
    }
  }
  return factors;
}

int main()
{
  long num = 3;
  for(int i = 3; numFactors(num) < 501; i++)num+=i;
  printf("%ld\n", num);
}
