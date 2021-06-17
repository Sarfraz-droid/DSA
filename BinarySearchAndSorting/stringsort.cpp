#include<bits/stdc++.h>
using namespace std;

int compareTo(string a,string b)
{
	int len = min(a.size(),b.size());

	int i =0;
	while(i<len)
	{
		if(a[i] > b[i])
		{
			return 1;
		}else if(a[i] < b[i])
		{
			return -1;
		}
		i++;
	}

	if(a.size() > b.size())
	{
		return 1;
	}else
		return -1;
}

void sortfunc(string str[],int n)
{
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<(n-i-1);j++)
		{
			if(compareTo(str[j],str[j+1]) > 0)
			{
				string s = str[j];
				str[j] = str[j+1];
				str[j+1] = s;
			}
		}
	}
}

int main() {
	int n;
	cin>>n;
	string str[n];
	for(int i = 0;i<n;i++)
	{
		cin>>str[i];
	}

	sortfunc(str,n);

	for(int i = 0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}

	return 0;
}