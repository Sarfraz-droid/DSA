#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll l=0,h=n;
		ll ans = INT_MIN;
		while(l<=h)
		{
			ll mid = (l+h)/2;
			if(pow(mid,k) <=n)
			{
				ans = mid;
				l = mid+1;
			}else
			{
				h = mid-1;
			}
		}
		cout<<ans<<endl;
	}
}