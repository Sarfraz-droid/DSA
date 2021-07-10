#include<bits/stdc++.h>
using namespace std;

int calcSteps(int a)
{
	// cout<<a<<" ";
	if(a <= 0)
	{
		return 0;
	}
	int temp = (a >> 1);
	int steps = 0;
	while(temp > 0)
	{
		temp = temp>>1;
		steps++;
	}
	// cout<<steps<<" ";
	return 1+calcSteps(a - (1<<steps));
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		cout<<calcSteps(a)<<endl;
	}
}