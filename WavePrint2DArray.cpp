#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    int val = 1;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            a[i][j] = val;
            val++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(i%2 == 0)
        {
            for(int j = 0;j<n;j++)
            {
                cout<<a[j][i]<<" ";
            }
        }else
        {
            for(int j = n-1;j>=0;j--)
            {

                cout<<a[j][i]<<" ";
            }
        }
    }
	return 0;
}