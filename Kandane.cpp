#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n] = {0};

    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }

    int MaxSum = INT_MIN;
    int Currsum = 0;
    for(int i = 0;i<n;i++)
    {
        Currsum+= A[i];
        if(Currsum > MaxSum)
        {
            MaxSum = Currsum;
        }
        if(Currsum < 0)
            Currsum = 0;
    }
    cout<<MaxSum;

    return 0;
}
