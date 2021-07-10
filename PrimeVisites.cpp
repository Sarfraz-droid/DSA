#include<bits/stdc++.h>
using namespace std;

void prime_sieve(long p[],long n)
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
				p[i] = 0;
			}
		}
	}

	p[2] = 1;
}


int main(){

	int t;
	cin>>t;

	long p[1000005] = {0};
	long csum[1000005] = {0};

	prime_sieve(p,1000000);

	
	for(int i = 1;i<=1000000;i++)
	{
		cout<<i<<" : "<<p[i]<<endl;
		csum[i] = csum[i-1] + p[i];
	}


	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<(csum[b]-csum[a])<<endl;
	}
	return 0;
}