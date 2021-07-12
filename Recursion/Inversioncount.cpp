#include<bits/stdc++.h>
using namespace std;

int inversion_count(nit *arr,int s,int e)
{
	if(s>=e)
	{
		return 0;
	}
	int mid = (s+e)/2;
	int x = inversion_count(arr,s,mid);
	int y = inversion_count(arr,mid+1,e);

}

int main()
{
	int arr[] = {1,5,2,6,3,0};
	int n = 6;
	cout<<inversion_count(arr,0,n-1)<<endl;
}