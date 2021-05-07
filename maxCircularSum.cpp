#include<bits/stdc++.h>
using namespace std;
int kandane(int a[],int n)
{
	int sum = 0;
	int maxssum  = 0;
	for(int i = 0;i<n;i++)
	{
		sum+=a[i];
		if(sum > maxssum)
			maxssum = sum;

		if(sum < 0)
			sum = 0;
	}
	return maxssum;
}

int circularSum(int a[],int n)
{
	int max_kandance = kandane(a,n);

	int maxcir_sum = 0;

	for(int i = 0;i<n;i++)
	{
		maxcir_sum+=a[i];
		a[i] = -a[i];
	}
	maxcir_sum  = maxcir_sum + kandane(a,n);
	return max(maxcir_sum,max_kandance);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int arr[n];

		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<circularSum(arr,n)<<endl;
	}
	return 0;
}