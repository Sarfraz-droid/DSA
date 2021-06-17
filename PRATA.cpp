#include<bits/stdc++.h>
using namespace std;

bool countParathas(int p,int arr[],int mid,int n)
{
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		float D = sqrt(8*mid/arr[i] +1);

		count+= (D-1)/2;
		// cout<<count<<" "<<D<<" | ";
	}
	if(count<p)
	{
		// cout<<" false\n";
		return false;
	}
	else
	{
		// cout<<" true\n";
		return true;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,n;
		cin>>p>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		

		int l = 0;
		int h = arr[0]*(p*(p+1)/2);
		int ans = INT_MAX;
		while(l<=h)
		{
			int mid = (l+h)/2;
			// cout<<mid<<" ";
			if(countParathas(p,arr,mid,n))
			{
				ans = min(ans,mid);
				h = mid-1;
			}else
				l = mid+1;
		}
		cout<<ans<<"\n";
	}
}
