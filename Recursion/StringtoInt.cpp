#include <bits/stdc++.h>
using namespace std;

int stringtoint(char *a,int n)
{
    if(n == 0)
        return 0;
    
    int f = (int)(a[0]-'0')*(pow(10,n-1));
    return f + stringtoint(a+1,n-1);
}

int main() {
    char a[] = "1234";
    int len = strlen(a);

    cout<<stringtoint(a,len);
}
