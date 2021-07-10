#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int sum = 0;
		while(a>>0)
		{
			int left = a&1;
			sum+=left;
			a>>=1;
		
		}
		cout<<sum<<endl;
	}
	return 0;

}