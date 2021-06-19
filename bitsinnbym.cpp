#include<bits/stdc++.h>
using namespace std;

int removebitsinIandJ(int n,int i,int f)
{
	int a = -1 << (i+1);
	int b = (1<<f) -1;
	int mask = a | b;
	return n & mask;
}

int updateN(int n,int m,int i,int j)
{
	m = m<<j;
	int n_ = removebitsinIandJ(n,i,j);
	cout<<n_<<" ";
	return n_|m;
}

int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int i,j;
	cin>>i>>j;

	cout<<updateN(n,m,i,j);
	return 0;
}