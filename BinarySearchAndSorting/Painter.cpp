#include<bits/stdc++.h>
using namespace std;
#define mod 10000003
#define ll long long

bool canPaint(ll arr[],ll n,ll mid,ll k,ll t)
{
	ll p = 1;
	ll temp = mid;
	for(int i = 0;i<n;i++)
	{
		if((temp-arr[i]) < 0)
		{
			p++;
			temp = mid;
			i--;
			if(p>k)
				return false;
		}else
		{
			temp-= arr[i];
		}
	}
	return true;
}


int main() {

	ll n,k,t;
	cin>>n>>k>>t;

	ll arr[n];
	ll l = 0,h =0;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
		h+= arr[i];
	}

	ll ans= h;

	while(l<=h)
	{
		ll mid = (l+h)/2;

		if(canPaint(arr,n,mid,k,t))
		{
			ans = (mid*t)%mod;
			h = mid-1;
		}else
			l=  mid+1;
	}

	cout<<ans;

	return 0;
}