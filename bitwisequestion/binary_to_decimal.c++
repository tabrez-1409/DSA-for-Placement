
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int bit = 1;
    int ans = 0;
    while (temp>0)
    {
        int digit = temp % 10;
        if (digit == 1)
        {
            ans = ans + bit;
        }
        bit = bit * 2;
        temp = temp/10;
    }
    cout<<ans<<" ";

    return 0;
}