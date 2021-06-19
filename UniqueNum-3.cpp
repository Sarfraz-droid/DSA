#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[64] = {0};
	for(int i = 0;i<n;i++)
	{
		int no;
		cin>>no;

		int j = 0;
		while(no > 0)
		{
			int lastbit = (no&1);
			arr[j] += lastbit;
			no = no>>1;
			j++;
		}
	}
	int p = 1;
	int ans =0;
	for(int i = 0;i<64;i++)
	{
		arr[i] = arr[i]%3;
		ans+= (arr[i]*p);
		p = p<<1;
	}
	cout<<ans;
	return 0;
}