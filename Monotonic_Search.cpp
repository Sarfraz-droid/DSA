#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int found = -1;
	int mid,f = 0,l = n;
	while(f<=l)
	{
		mid = (f+l)/2;
		if((mid*mid) == n)
		{
			found = mid;
			break;
		}else if((mid*mid) < n)
		{
			f = mid+1;
		}else
		{
			l = mid-1;
		}
	}
	if(found == -1)
	{
		cout<<"Not Found!";
	}else
		cout<<"Found at "<<found;
}