#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
	return (n&1);
}

int getBit(int n,int i)
{
	int mask =  1 << i;
	int bit = (n & mask) > 0? 1:0;

	return bit;
}

int setBit(int n,int i)
{
	int mask = 1<<i;

	return (n|mask);
}

void clearBit(int &n,int i)
{
	int mask = ~(1<< i);
	n = (n & mask);
}

void updateBit(int &n,int i,int v)
{
	clearBit(n,i);
	int mask = v << i;
	n = n | mask;
}

int main()
{
	int n;
	cin >> n;
	int i = 0;
	cin>>i;
	updateBit(n,i,1);
	cout<<n<<endl;

}