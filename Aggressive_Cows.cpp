#include<bits/stdc++.h>
using namespace std;

bool check(int n,int c, int arr[],int mid)
{
	int cnt = 1;
	int last = arr[0];
	for(int i = 1;i<n;i++)
	{
		if((arr[i]-last) >= mid)
		{
			cnt++;
			last = arr[i];

			if(cnt == c)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int n,c;
	cin>>n>>c;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int f = 0;
	int l = arr[n-1] - arr[0];
	int mid = 0;
	int ans;
	while(f<=l)
	{
		mid = (f+l)/2;

		bool cowgot = check(n,c,arr,mid);

		if(cowgot)
		{
			ans = mid;
			f = mid+1;
		}else
		{
			l = mid-1;
		}

	}
	cout<<mid;

	return 0;
}