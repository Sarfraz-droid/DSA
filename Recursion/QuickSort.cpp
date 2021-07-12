#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{
	int i = s-1;
	int j = s;

	int pivot = a[e];

	while(j<e)
	{
		if(a[j] <= pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
		j++;
	}
	swap(a[i+1],a[e]);

	return i+1;
}

void quicksort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}

	int p = partition(a,s,e);

	quicksort(a,s,p-1);

	quicksort(a,p+1,e);

	return;
}

int main()
{
	int a[] = {5,4,2,1,3};
	int n = 5;

	quicksort(a,0,n-1);

	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}