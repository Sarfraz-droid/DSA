#include<bits/stdc++.h>
using namespace std;

bool isPossible(int A[],int n,int m,int mid)
{
	int students = 1;
	int temp = 0;
	for (int i = 0; i <n;i++)
	{
		if(temp+A[i]>mid)
		{
			students++;
			temp = A[i];
			if(students>m)
			{
				return false;
			}
		}else
		{
			temp+=A[i];
		}
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int n,m;
		cin>>n>>m;
		int A[n];
		int l =0,h = 0;
		if(n<m)
		{
			cout<<"-1\n";
			continue;
		}

		for(int i = 0;i<n;i++)
		{
			cin>>A[i];
			h+=A[i];
		}

		l = A[n-1];
		int ans = INT_MAX;
		while(l<=h)
		{
			int mid = (l+h)/2;
			if(isPossible(A,n,m,mid))
			{
				ans = min(ans,mid);
				h = mid-1;
			}else
			{
				l = mid+1;		
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}