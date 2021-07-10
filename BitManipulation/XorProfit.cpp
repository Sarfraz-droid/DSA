#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int max_xor = 0;
	for(int i = a;i<=b;i++)
	{

		for(int j = i+1;j<=b;j++)
		{
			if((i^j) > max_xor)
			{
				max_xor = (i^j);				
			}
		}
	}
	cout<<max_xor;
}