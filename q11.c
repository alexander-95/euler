#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num[20][20];
  for(int i = 0; i < 20; i++)
  {
    for(int j = 0; j < 20; j++) scanf("%d", &num[i][j]);
  }
  int largest = 0, prod;
  //across
  for(int i = 0; i < 20; i++)
  {
    for(int j = 0; j < 20 - 3; j++)
    {
      int prod = num[i][j] * num[i][j+1] * num[i][j+2] * num[i][j+3];
      if(prod > largest) largest = prod;
    }
  }
  //down
  for(int i = 0; i < 20 - 3; i++)
  {
    for(int j = 0; j < 20; j++)
    {
      int prod = num[i][j] * num[i+1][j] * num[i+2][j] * num[i+3][j];
      if(prod > largest) largest = prod;
    }
  }
  //diagonal
  for(int i = 0; i < 20 - 3; i++)
  {
    for(int j = 0; j < 20 - 3; j++)
    {
      int prod = num[i][j] * num[i+1][j+1] * num[i+2][j+2] * num[i+3][j+3];
      if(prod > largest) largest = prod;
    }
  }
  //reverse diagonal
  for(int i = 3; i < 20; i++)
  {
    for(int j = 0; j < 20 - 3; j++)
    {
      int prod = num[i][j] * num[i-1][j+1] * num[i-2][j+2] * num[i-3][j+3];
      if(prod > largest) largest = prod;
    }
  }
  printf("%d\n", largest);
  
}
