#include<bits/stdc++.h>
using namespace std;

int dectoBinary(int n)
{
	int ans = 0;
	while(n>0)
	{
		int left = n&1;
		ans = ans*10;
		ans+= left;
		n = n>>1;
		// cout<<n<<endl;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;

	cout<<dectoBinary(n);

}