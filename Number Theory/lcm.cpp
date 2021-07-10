#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n)
{
	if(m%n == 0)
	{
		return n;
	}
	return gcd(n,m%n);
}

int main()
{
	int a,b;
	cin>>a>>b;

	int k = gcd(max(a,b),min(a,b));
	int lcm = (a*b)/k;

	cout<<lcm<<endl;
	return 0;
}