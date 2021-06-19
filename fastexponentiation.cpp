#include<bits/stdc++.h>
using namespace std;

int fastexp(int a,int n)
{
	int ans=  1;

	while(n > 0)
	{
		int lastbit = (n&1);

		if(lastbit)
		{
			ans = ans*a;
		}
		a = a*a;
		n = n>>1;
	}
	return ans;
}

int main()
{

	int a,n;
	cin>>a>>n;

	cout<<fastexp(a,n);
	return 0;
}