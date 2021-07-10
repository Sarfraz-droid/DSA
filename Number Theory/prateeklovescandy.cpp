#include<bits/stdc++.h>
using namespace std;


vector<int> primes;
void prime_sieve(int n)
{
	bool arr[n+1];
	for(int i = 3;i<=n;i+=2)
	{
		if(arr[i] == false)
		{
			primes.push_back(i);		
			for(int j = i*i;j<=n;j+=i)
			{
				arr[j] = true;
			}
		}
	}
}

int main()
{

	int t;
	cin>>t;
	prime_sieve(100000004);
	while(t--)
	{
		int n;
		cin>>n;

		cout<<primes[n-1];
	}
	return 0;
}