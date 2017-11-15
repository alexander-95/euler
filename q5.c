#include<stdio.h>
#include<string.h>
int factorise(int n, char* prime)
{
  for(int i = 2; i <= n/2; i++)
  {
    if(n%i == 0 && prime[i])
    {
      printf("%d\n", i);
      if(prime[n/i]) printf("%d\n", n/i);
      else factorise(n/i, &prime[0]);
      break;
    }
  }  
}

int factorFrequency(int n, char* prime, int* freq)
{
  if(prime[n])freq[n] = 1;
  for(int i = 2; i <= n/2; i++)
  {
    if(n%i == 0 && prime[i])
    {
      freq[i]++;
      if(prime[n/i]) freq[n/i]++;
      else factorFrequency(n/i, &prime[0], &freq[0]);
      break;
    }
  }  
}

int main()
{
  char prime[21];
  for(int i = 0; i < 21; i++) prime[i] = 1;
  for(int i = 2; i < 21; i++)
  {
    if(prime[i])
    {
      for(int j = i*2; j < 21; j+=i) prime[j] = 0;
    }
  }
  int freq[21][21];
  for(int i = 0; i <= 20; i++)
  {
    for(int j = 0; j <= 20; j++) freq[i][j] = 0;
  }
  for(int i = 0; i <= 20; i++)
  {
    factorFrequency(i, &prime[0], &freq[i][0]);
  }
  int largestFreq[21];
  for(int j = 0; j < 21; j++)
  {
    int largest = 0;
    for(int i = 0; i < 21; i++)
    {
      if(freq[i][j] > largest) largest = freq[i][j];
    }
    largestFreq[j] = largest;
  }
  int res = 1;
  for(int i = 2; i < 21; i++)
  {
    for(int j = 0; j < largestFreq[i]; j++)res*=i;
  }
  printf("%d\n", res);
}
