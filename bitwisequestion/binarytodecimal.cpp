#include <iostream>
using namespace std;
int binarytodecimal(int val){
    int pos = 1;
    int ans = 0;
    while(val != 0){
        int digit = val%10;
        if(digit == 1){
            ans = ans + pos;
        }
        pos = pos * 2;
        val = val/10;
    }
    return ans;
}
int main() {
    cout<<binarytodecimal(1010)<<" ";
    return 0;
}