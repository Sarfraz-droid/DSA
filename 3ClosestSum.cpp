#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> A(n);
	int diff = INT_MAX;
	int maxsum;
	int target;
	cin>>target;
	for(int i = 0;i<n;i++)
	{
		int p;
		cin>>p;
		A[i] = p;
	}

    sort(A.begin(),A.end());
    int closeDiff=INT_MAX;
    int close_sum;
    for(int i=0;i<n-2;i++)
    {
        int sum=0;
        int j=i+1,k=n-1;
        
        while(j<k)
        {
			sum = A[i] + A[j] + A[k];
            if(abs(sum-target)<closeDiff)
            {
                closeDiff=abs(sum-target);
                close_sum=sum;
            }
            if(sum<target)
            {
                j++;
            }
            else if(sum>target)
            {
                k--;
            }
            else
            {
                break;
            }
        }
    }
	cout<<close_sum;
	return 0;
}