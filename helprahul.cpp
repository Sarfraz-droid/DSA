#include<bits/stdc++.h>
using namespace std;

int find_key(int a[],int n,int key)
{
	int mid = 0,f = 0,l = n-1;
	while(f<=l)
	{
		mid = (f+l)/2;
		if(key == a[mid])
		{
			return mid;
		}else if(key <= a[mid])
		{
			if(key>=a[f] && key<=a[mid])
			{
				l = mid-1;
			}else
				f=  mid+1;
		}else
		{
			if(key<=a[l] && key>=a[mid])
			{
				f = mid+1;
			}else
			{
				l = mid-1;
			}
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}

	int key;
	cin>>key;

	cout<<find_key(a,n,key);
}