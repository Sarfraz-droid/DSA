#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n] = {0};
    int C[n] = {0};
    cin>>A[0];
    C[0] = A[0];
    for(int i = 1;i<n;i++)
    {
        cin>>A[i];
        C[i] = C[i-1] + A[i];
    }

    int MaxSum = INT_MIN;
    int Currsum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            if(i != 0)
                Currsum = C[j] - C[i-1];
            else
                Currsum = C[j];
//            cout<<Currsum<<" ";
            if(Currsum > MaxSum)
            {
                MaxSum = Currsum;
            }
        }
    }
    cout<<MaxSum;

    return 0;
}
