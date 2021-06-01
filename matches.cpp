#include <iostream>
using namespace std;
    int numberOfMatches(int n) {
        int matches = 0;
        int num = n;
        while(num>1)
        {
            if(num%2 ==0)
            {
                matches += num/2;
                cout<<num/2<<" "<<num/2<<endl;
                num = num/2;
            }else
            {
                matches += (num-1)/2;
                cout<< (((num-1)/2) +1)<<" "<<(num-1)/2<<endl;
                num = ((num-1)/2) +1;
            }
        }
        return matches;
    }
int main() {
    int n;
    cin>>n;
    cout<<numberOfMatches(n);
    return 0;
}
