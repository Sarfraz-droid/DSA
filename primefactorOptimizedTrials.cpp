#include<bits/stdc++.h>
using namespace std; 


void factors(int n)
{
	vector<pair<int,int>> factors;

	for(int i = 2;(i*i)<=n;i++)
	{
		if(n%i == 0)
		{
			int cnt = 0;

			while(n%i == 0)
			{
				cnt++;
				n = n/i;
			}

			factors.push_back(make_pair(i,cnt));
		}
	}

	if(n!=1)
	{
		factors.push_back(make_pair(n,1));
	}
	for(auto i:factors)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
}
int main()
{
	int n;
	cin>>n;

	factors(n);

	return 0;
}