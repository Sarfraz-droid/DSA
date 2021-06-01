#include<bits/stdc++.h>
using namespace std;
bool compare(int &a,int &b)
{
	string s1 = to_string(a);
	string s2 = to_string(b);

	int m1 = s1.size();
	int m2 = s2.size();

	int i = 0;
	int j = 0;
	while(i<(m1-1) || j<(m2-1))
	{

		if(s1[i] != s2[j])
		{
			return s1[i]<s2[j];
		}

		if(i!=m1-1)
		{
			i++;
		}
		if(j!=m2-1)
		{
			j++;
		}
	}
	return s1[i]<s2[j];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int A[n];
		for(int i = 0;i<n;i++)
		{
			cin>>A[i];
		}

		sort(A,A+n,compare);

		for(int i = 0;i<n;i++)
		{
			cout<<A[i];
		}
	}
	return 0;
}