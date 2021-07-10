#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int pre[n] = {0};
		int arr[n] = {0};
		int sum = 0;
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];

			sum+= arr[i];
			sum %= n;
			sum = (sum+n)%n;

			pre[sum]++;
		}

		int ans=0;
		for(int i= 0;i<n;i++)
		{
			int m = pre[i];
			ans+= (m)*(m-1)/2;
		}

		cout<<ans<<endl;
	}

}