#include<bits/stdc++.h>
using namespace std;

bool Binarysearch(int arr[],int key,int l,int h)
{
	if(l>h)
		return false;
	int mid = (h+l)/2;
	if(arr[mid] == key)
	{
		return true;
	}else if(arr[mid] > key)
	{
		return Binarysearch(arr,key,l,mid-1);
	}else
		return Binarysearch(arr,key,mid+1,h);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}

	int key;
	cin>>key;

	if(Binarysearch(arr,key,0,n-1))
	{
		cout<<"ELEMENT FOUND";
	}else
		cout<<"ELEMENT NOT FOUND";
	return 0;
}