#include <iostream>
using namespace std;

int bits(int a, int b){
    int n = (a&b);
    int count = 0;
    while (n != 0)
    {
        int bit = n&1;
        if(bit==1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main(){
   cout<< bits(7,7);

    return 0;
}