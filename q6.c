#include<stdio.h>

int main()
{
  int sumOfSquares = 0, squareOfSums = 0;
  for(int i = 0; i <= 100; i++)
  {
    sumOfSquares += i*i;
    squareOfSums += i;
  }
  squareOfSums *= squareOfSums;
  int diff = squareOfSums - sumOfSquares;
  printf("%d\n", diff);
}
