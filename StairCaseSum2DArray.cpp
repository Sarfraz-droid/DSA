#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n][n];
    int val =1;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<val<<" ";
            A[i][j] = val++;
        }
        cout<<endl;
    }

    int key;
    cin>>key;

    int i = 0,j = n-1;
    while(i < n && j>=0)
    {
        if(A[i][j] == key)
        {
            cout<<"Element Found";
            return 0;
        }else if(A[i][j] < key)
        {
            i++;
        }else
        {
            j--;
        }
    }
    cout<<"Element not found";
    return 0;
}
