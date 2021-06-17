#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isScholarship(ll n,ll mid,ll m,ll x,ll y)
{
	ll l = mid,r = (n-mid);

	ll l_c = m + (r*y);
	// cout<<mid<<" "<<l_c;
	if((l_c/x) >= l)
	{
		// cout<<" TRUE \n";
		return true;
	}
	else 
	{
		// cout<<" FALSE \n";
		return false;
	}
	return false;
}

int main()
{
	ll N,M,X,Y;
	cin>>N>>M>>X>>Y;
	ll l = 0;
	ll h = N;
	ll ans = INT_MIN;
	while(l<=h)
	{
		ll mid = (l+h)/2;

		if(isScholarship(N,mid,M,X,Y))
		{

			ans = max(ans,mid);
			l = mid+1;
		}else
			h = mid-1;
	}
	cout<<ans;
}