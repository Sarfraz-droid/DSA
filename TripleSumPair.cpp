#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int target;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>target;

	sort(arr,arr+n);

	for(int i = 0;i<n;i++)
	{
		int f = i+1;
		int l = n-1;
		while(f<l)
		{
			int k = arr[i]+arr[f]+arr[l];
			if(k == target)
			{
				cout<<arr[i]<<", "<<arr[f]<<" and "<<arr[l]<<endl;
				f++;
				l--;
			}else if(k < target)
				f++;
			else
				l--;
		}
	}
	return 0;
}