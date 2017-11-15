void primeGenerator(int n, char* prime)
{
  prime[0] = prime[1] = 0;
  for(int i = 2; i < n; i++) prime[i] = 1;
  for(int i = 2; i < n; i++)
  {
    if(prime[i])
    {
      for(int j = i*2; j < n; j+=i) prime[j] = 0;
    }
  }
}
