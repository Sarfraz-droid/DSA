#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
	return (n&1);
}

int getBit(int n,int i)
{
	int mask =  1 << i;
	int bit = (mask & i) > 0? 1:0;

	return bit;
}

int setBit(int n,int i)
{
	int mask = 1<<i;

	return (n|mask);
}

int main()
{
	int n;
	cin >> n;
	int i = 0;
	cin>>i;

	cout <<setBit(n,i);

}