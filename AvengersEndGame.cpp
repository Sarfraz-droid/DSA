#include <iostream>
using namespace std;
#define ll long long
int main()
{
	ll primes[] = {2,3,5,7,11,13,17,19};
	int t;
	cin>>t;
	while(t--)
	{


		int n;
		cin>>n;

		int subsets =  (1<<8) - 1;

		for(int i = 1;i<=subsets;i++)
		{
			ll Setbits = __builtin_popcount(i);
			ll denom = 1;
			for(int j = 0;j<7;j++)
			{
				if(i&(1<<j))
				{
					denom *= primes[j];
				}
			}

			if(setbits&1)
			{
				ans+= n/denom;
			}else
				ans-= n/denom;
		}
	}
}
