#include<stdio.h>
int swap(int* a, int* b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

int main()
{
  int previous = 1, current = 2, new = 0, sum = 2;
  while(current < 4000000)
  {
    new = previous + current;
    if(new%2 == 0)sum+=new;
    swap(&new, &current);
    swap(&new, &previous);
  }
  printf("%d\n", sum);
}
