#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int h = INT_MIN;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
		if(h < arr[i])
		{
			h = arr[i];
		}
	}

	int temp[h+1] = {0};

	for(int i = n-1;i>=0;i--)
	{
		temp[arr[i]]++;
	}
	int i = 0;
	while(i<n)
	{
		int k = temp[i];
		while(k>0)
		{
			arr[i] = k;
			i++;
			k--;
		}
	}

	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}