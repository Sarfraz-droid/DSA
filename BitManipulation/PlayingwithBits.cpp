#include<bits/stdc++.h>
using namespace std;

int Setbits(int n)
{
	int p = 0;
	while(n>0)
	{
		int leftbit = n&1;
		p+=leftbit;
		n = n>>1;
	}
	return p;
}

void printAns(int a,int b)
{
	int ans = 0;
	for(int i = a;i<=b;i++)
	{
		ans+=Setbits(i);
	}
	cout<<ans<<endl;
}

int main()
{
	int Q;
	cin>>Q;
	while(Q--)
	{
		int a,b;
		cin>>a>>b;
		printAns(a,b);
		printAns(a,b);
	}
	return 0;
}