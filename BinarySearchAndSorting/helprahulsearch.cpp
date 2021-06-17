#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int b,int h,int key)
{
	while(b<=h)
	{
		int mid = (h+b)/2;
		 if(arr[mid] == key)
		 {
			return mid;
		 }else if(arr[mid] < key)
		 {
		 	b = mid+1;
		 }else
			h = mid - 1;		 	
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	int h = arr[0];
	int h_pos = 0;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i] < h)
		{
			h = arr[i];
			h_pos = i;
		}
	}
	int k = search(arr,0,h_pos-1,key);
	if(k > 0)
	{
		cout<<(n-h_pos+k);
	}else
	{
		k = search(arr,h_pos,n-1,key);
		cout<<(k);
	}


	return 0;
}