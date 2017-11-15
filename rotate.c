#include<stdio.h>

int main()
{
  //count the number of digits
  int num = 1234, len = 0, temp = num;
  while(temp)
  {
    temp/=10;
    len++;
  }

  //put number into array
  char arr[len];
  temp = num;
  for(int i = len-1; i >= 0; i--)
  {
    arr[i] = temp%10;
    temp/=10;
  }

  //generate remaining rotations
  for(int i = 1; i < len; i++)
  {
    int rotation = 0, pow = len-1, power = 10;
    for(int j = i; j < len; j++)
    {
      //printf("%d", arr[j]);
      power = 1;
      for(int k = 0; k < pow; k++)power*=10;
      rotation+= (arr[j]*power);
      pow--;
    }
    
    for(int j = 0; j < i; j++)
    {
      //printf("%d", arr[j]);
      power = 1;
      for(int k = 0; k < pow; k++)power*=10;
      rotation+= (arr[j]*power);
      pow--;
    }
    //printf("\n");
    //printf("%d\n", rotation);
  }

  //print number
  //for(int i = 0; i < len; i++)printf("%d",arr[i]);
  //printf("\n%d\n", len);
}
