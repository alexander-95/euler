#include<string.h>
#include<stdio.h>

int main()
{
  //prime sieve
  int len = 1000000, count = 0; 
  char prime[len];
  memset(prime, 255, len);
  for(int i = 2; i < len; i++)
  {
    if(prime[i])
    {
      for(int j = i<<1; j < len; j+=i)prime[j] = 0;
    }
  }
  
  for(int i = 2; i < len; i++)
  {
    if(prime[i])
    {
      //count the digits
      int temp = i, digits = 1;
      while(temp > 9)
      {
	temp/=10;
	digits++;
      }
      int cyclic_prime = 1;
      //put number into array
      char arr[digits];
      temp = i;
      for(int j = digits-1; j >= 0; j--)
      {
	arr[j] = temp%10;
	temp/=10;
      }
      
      //generate remaining rotations
      for(int j = 1; j < digits; j++)
      {
	int rotation = 0, pow = digits-1, power = 10;
	for(int k = j; k < digits; k++)
	{
	  power = 1;
	  for(int l = 0; l < pow; l++)power*=10;
	  rotation+= (arr[k]*power);
	  pow--;
	}
    
	for(int k = 0; k < j; k++)
	{
	  power = 1;
	  for(int l = 0; l < pow; l++)power*=10;
	  rotation+= (arr[k]*power);
	  pow--;
	}
	if(!prime[rotation])cyclic_prime = 0;
      }
      if(cyclic_prime)count++;
    }
  }
  printf("%d\n", count);
}
