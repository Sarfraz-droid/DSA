#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}

	int Xor = arr[0];
	for(int i = 1;i<n;i++)
	{
		Xor= Xor^arr[i];
	}
	int temp = 0;
	for(int i = 0;i<n;i++)
	{
		if((Xor&arr[i]) != 0)
		{
			temp = temp^arr[i];
		}
	}
	int a = max(temp,(Xor^temp));
	int b = min(temp,(Xor^temp));


	cout<<b<<" "<<a;


	return 0;
}