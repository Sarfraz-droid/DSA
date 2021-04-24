#include<bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin>>n;
    long long int A[n];
    long long load = 0;
    long long maxload = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
        load+=A[i];
    }
    if(load%n!=0)
    {
        cout<<"-1";
    }else
    {
        load = load/n;
        long long diff = 0;
        for(int i = 0;i<n;i++)
        {
            diff+=A[i] - load;
            maxload = max(maxload,abs(diff));
        }
        cout<<maxload;
    }

    return 0;
}