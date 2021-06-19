#include<bits/stdc++.h>
using namespace std;

int dectoBinary(int n)
{
	int ans = 0;
	if(n>0)
	{
		int left = n&1;
		ans = ans*10 + left;
		n = n>>1;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;

	cout<<dectoBinary(n);

}