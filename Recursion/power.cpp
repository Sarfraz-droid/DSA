#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
	if(n == 0)
		return 1;

	return a*power(a,n-1);
}

int fastpower(int a,int n)
{
	if(n == 0)
	{
		return 1;
	}

	int subpower = fastpower(a,n/2);

	subpower *= subpower;

	if(n&1)
	{
		return a*subpower;
	}
	return subpower;
}

int main()
{
	int a,n;
	cin>>a>>n;

	cout<<fastpower(a,n);

	return 0;
}