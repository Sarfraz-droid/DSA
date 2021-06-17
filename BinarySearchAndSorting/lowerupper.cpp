#include<bits/stdc++.h>
using namespace std;

static bool comp(int a,int key)
{
	return a>=key;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}

	int q;
	cin>>q;
	for(int i = 0;i<q;i++)
	{
		int k;
		cin>>k;

		vector<int>::iterator low,up;
  		low=lower_bound (arr.begin(), arr.end(), k);
	  	up= upper_bound (arr.begin(), arr.end(), k,comp); 


		if(low == arr.end())
		{
			cout<<"-1 ";
		}else
			cout<<(low-arr.begin())<<" ";

		if(up == arr.end())
		{
			cout<<"-1";
		}else
			cout<<(up-arr.begin());

		cout<<endl;
	}
	return 0;
}