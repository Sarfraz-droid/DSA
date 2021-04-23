#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }
    int maxSum = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int currSum = 0;
            for(int k = i;k<=j;k++)
            {
                currSum+=A[k];
            }
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    cout<<"MaxSum : "<<maxSum;
}
