#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	queue<int> q;
	cin>>str;
	string ans = "";
	for(int i = 0;i<n;i++)
	{
		if(str[i]=='c')
		{
			q.push(i);
		}
	}
	cout<<endl;

	for(int i = 0;i<n;i++)
	{
		if(q.empty() == 1)
		{
			ans+='U';
			continue;
		}
		int temp = (i - q.front());
		if(str[i]=='n')
		{
			if(temp <=2)
			{
				ans+= 'I';
			}else
				ans+= 'U';

			if(temp >2)
			{
				q.pop();
			}
		}else if(str[i]=='c' && temp!=0)
		{
			ans+='I';
			q.pop();
		}else
			ans+='I';
	}
	cout<<ans;

	return 0;


}