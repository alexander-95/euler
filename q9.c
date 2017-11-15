#include<stdio.h>
int main()
{
  int limit = 1000, triplet = 0;
  int square[limit];
  for(int i = 0; i < limit; i++)square[i] = i*i;
  for(int c = limit; c >= 0; c--)
  {
    for(int b = limit - c; b >= 0; b--)
    {
      int a = limit - (b + c);
      if(a < b && b < c)
      {
	if(square[a] + square[b] == square[c])triplet = a*b*c;
      }
    }
  }
  printf("%d\n", triplet);
}
