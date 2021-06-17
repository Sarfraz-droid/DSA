#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i = 0;i<n;i++)
	{
		int small = arr[i];
		int pos = i;
		for(int j = i+1;j<n;j++)
		{
			if(arr[j] < small)
			{
				small = arr[j];
				pos = j;
			}
		}

		int temp = arr[i];
		arr[i]= arr[pos];
		arr[pos] = temp;
	}
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}