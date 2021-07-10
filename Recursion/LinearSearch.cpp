#include<bits/stdc++.h>
using namespace std;

int first(int *a,int n,int key)
{
	if(n == 0)
		return -1;

	if(a[0] == key)
	{
		return 0;
	}

	int i = first(a+1,n-1,key);

	if(i == -1)
	{
		return -1;
	}
	return i+1;
}	

void all(int *a,int i,int n,int key)
{
	if(i == n)
		return;

	if(a[i] == key)
	{
		cout<<i<<" ";
	}

	all(a,i+1,n,key);
}	

int last(int *a,int n,int key)
{
	if(n==0)
	{
		return -1;
	}	

	int i = last(a+1,n-1,key);
	if(i==-1)
	{
		if(a[0] == key)
			return 0;
		else 
			return -1;
	}
	return i+1;
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

	all(arr,0,n,key);
	return 0;
}