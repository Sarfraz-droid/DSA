#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int p[],int n)
{
	for(int i = 3;i<=n;i+=2)
	{
		p[i] = 1;
	}

	for(int i = 3;i<=n;i+=2)
	{
		if(p[i] == 1)
		{
			for(int j = i*i;j<=n;j+=i)
			{
				p[j] = 0;
			}
		}
	}
	p[2] = 1;
}

int main()
{
	int n;
	cin>>n;
	int p[n+1] = {0};
	prime_sieve(p,n);

	for(int i = 2;i<=n;i++)
	{
		if(p[i] == 1)
		{
			cout<<i<<" ";
		}
	}
}