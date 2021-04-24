#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int val = 1;
    int A[n][m];
    for(int i=  0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            A[i][j] = val++;
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;

    int startRow = 0;
    int startCol = 0;
    int endRow = n-1;
    int endCol =  m-1;

    while(startRow<=endRow && startCol<=endCol)
    {
        //first
        for(int i = startCol;i<=endCol;i++)
            cout<<A[startRow][i]<<" ";
        startRow++;
        //second
        for(int i = startRow;i<=endRow;i++)
            cout<<A[i][endCol]<<" ";
        endCol--;
        //third
        if(startRow < endRow)
        {
            for(int i = endCol;i>=startCol;i--)
                cout<<A[endRow][i]<<" ";
            endRow--;
        }
        //foruth
        if(startCol < endCol)
        {
            for(int i = endRow;i>=startRow;i--)
                cout<<A[i][startCol]<<" ";
            startCol++;
        }
    }
    return 0;
}
