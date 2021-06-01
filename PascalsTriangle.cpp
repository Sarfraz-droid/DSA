#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for(int i= 0;i<numRows;i++)
    {
        vector<int> temp;
            
        for(int j = 0;j<=i;j++)
        {
            if(j == 0 || j == i)
            {
                temp.push_back(1);
                cout<<"1 ";
            }else
            {
                int k = ans[i-1][j-1] + ans[i-1][j];
                temp.push_back(k);
                cout<<k<<" ";
            }
        }
        cout<<endl;
        ans.push_back(temp);
    }
    return ans;
        
}

int main() {
    int n;
    cin>>n;
    generate(n);
}