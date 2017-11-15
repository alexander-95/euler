#include<stdio.h>

int palindrome(int num)
{
  int digits = 1, temp = num;
  while(num > 9)
  {
    num/=10;
    digits++;
  }
  int arr[digits];
  num = temp;
  for(int i = digits-1; i >= 0; i--)
  {
    arr[i] = num%10;
    num/=10;
  }
  for(int i = 0; i <= digits/2; i++)
  {
    if(arr[i] != arr[(digits-1)-i])return 0;
  }
  return 1;
}

int main()
{
  int len = 900*900, largest = 0;
  //int nums[len];
  for(int i = 100; i < 1000; i++)
  {
    for(int j = 100; j < 1000; j++)
    {
      //nums[(i*j)+j] = i*j;
      if(i*j > largest && palindrome(i*j))largest = i*j;
    }
  }
  //int largest = 0;
  //for(int i = 0; i < len; i++)
  //{
  //  if(nums[i] > largest)largest = nums[i];
  //}
  //while(!palindrome(len-1))len--;
  printf("%d\n", largest);
}
