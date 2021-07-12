#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int j,int n)
{
	if(n == 1)
	{
		return;
	}
	if(j == n-1)
	{
		return bubblesort(a,0,n-1);
	}

	if(a[j] > a[j+1])
	{
		swap(a[j],a[j+1]);
	}

	bubblesort(a,j+1,n);
	return;
}

int main()
{
	int a[] = {5,3,2,1,4};
	int n = 5;

	bubblesort(a,0,n);
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}