#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int ans[2000006] = {0};
void prime_sieve()
{
    ll n = 2000006;
	bool arr[n+1];
    ans[2] = 1;
    ans[3] = 1;
	for(ll i = 3;i<=n;i+=2)
	{
		ans[i] = ans[i] + ans[i-2];
		if(arr[i] == false)
		{
			ans[i]++;
			for(ll j = i*i;j<=n;j+=i)
			{
				arr[j] = true;
			}
		}
        ans[i+1] = ans[i];
	}
}

int main()
{
	prime_sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;

		cout<<(ans[b] - ans[a-1])<<endl;
	}
}