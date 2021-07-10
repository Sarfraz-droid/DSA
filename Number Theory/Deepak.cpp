#include<bits/stdc++.h>
using namespace std;

int FindSieve(int n)
{
	int m = 100000005;
	bool k[m];
	int i = 3;
	int prime = 2;
	// cout<<prime;
	if(n == 0)
		return 2;
	while(n>0)
	{
		if(k[i] == false)
		{
			prime = i;
			n--;
			for(int j = i*i;j<=m;j+=i)
			{
				k[j] = true;
			}
		}
		i++;
	}
	return prime;
}

int main()
{
	int n;
	cin>>n;
	int ans = FindSieve(n-1);
	cout<<ans;
	return 0;
}