#include<stdio.h>
#include<string.h>

int printFactors(long num)
{
  long limit = num;
  for(long i = 1; i < limit; i++)
  {
    if(num % i == 0)
    {
      printf("%ld\n%ld\n", i, num/i);
      limit = num / i;
    }
  }
}

int printPrimeFactors(long num)
{
  long limit = num;
  int prime = 1;
  for(long i = 2; i < limit; i++)
  {
    if(num % i == 0)
    {
      prime = 0;
      printPrimeFactors(i);
      printPrimeFactors(num / i);
      break;
    }
  }
  if(prime)printf("%ld\n", num);
}

int main()
{
  printPrimeFactors(600851475143);
}
