#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int e)
{
	int mid = (s+e)/2;

	int i = s;
	int j = mid+1;
	int k = s;
	vector<int> temp;
	while(i<=mid && j<=e)
	{
		if(a[i] < a[j])
		{
			temp.push_back(a[i++]);
		}else
		{
			temp.push_back(a[j++]);
		}
	}

	while(i<=mid)
	{
		temp.push_back(a[i++]);
	}

	while(j<=mid)
	{
		temp.push_back(a[j++]);
	}

	// OVERWRITING

	for(int i = 0;i<temp.size();i++)
	{
		a[s+i] = temp[i];
	}
}

void mergeSort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}

	int mid = (s+e)/2;

	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	//Merge

	merge(a,s,e);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	mergeSort(a,0,n-1);

	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}