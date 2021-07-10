#include<bits/stdc++.h>
using namespace std;

int Calc(int a,int b,int c)
{
	int ans = 1;
	int t = 1;
	while(b>0)
	{
		if(b&1)
		{
			ans*= a;
		}

		a = a*a;
		b = b>>1;
	}
	return ans%c;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	int ans = Calc(a,b,c);

	cout<<ans<<endl;
}