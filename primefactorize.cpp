#include<bits/stdc++.h>
using namespace std;
#define ll long long


void prime_sieve(int n,vector<int> &prime)
{
	int p[n+1] = {0};

	for(ll i = 3;i<=n;i+=2)
	{
		p[i] = 1;
	}

	for(ll i = 3;i<=n;i+=2)
	{
		if(p[i] == 1)
		{
			prime.push_back(p[i]);

			for(ll j = i*i;j<=n;j+=i)
			{
				p[j] = 0;
			}

		}
	}

	p[2] = 1;
}

int factors(vector<int> primes,int n)
{
	int s = primes.size();

	int i = 0;
	int p = primes[0];
	int count = 0;
	while(p*p <=n)
	{
		if(n%p == 0)
		{
			n = n/p;
			count++;
		}
		i++;
		p = primes[i];
	}

	return count;
}

int main()
{
	ll N = 1000000;
	vector<int> primes;
	prime_sieve(N,primes);

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<factors(primes,n)<<endl;
	}
	return 0;
}