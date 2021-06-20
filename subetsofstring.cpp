#include<bits/stdc++.h>
using namespace std;

void print(int n,string str)
{
	int j = 0;
	while(n>0)
	{
		int lastBit = 1&n;
		if(lastBit)
		{
			cout<<str[j];
		}
		j++;
		n = n>>1;
	}
}

void printSubsets(string str)
{
	int n = str.size();
	for(int i = 0; i < (1<<n);i++)
	{
		print(i,str);
		cout<<endl;
	}
}

int main()
{
	string a;
	cin>>a;
	printSubsets(a);
}