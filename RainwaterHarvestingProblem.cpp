#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int lo = 0;
    int hi = n-1;
    int left = 0;
    int right = 0;
    int water = 0;
    while(lo<=hi)
    {
        if(arr[lo] < arr[hi])
        {
            if(arr[lo] > left)
            {
                left =  arr[lo];
            }else
            {
                water += left - arr[lo];
            }
            lo++;
        }else
        {
            if(arr[hi] > right)
            {
                right = arr[hi];
            }else
            {
                water += right - arr[hi];
            }
            hi--;
        }
    }

    cout<<water;
}
