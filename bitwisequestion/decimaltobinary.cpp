#include <iostream>
using namespace std;
void decimaltobinary(int val){
    int bin [32];
    int i = 0;
    while(val != 0){
         bin[i] = val % 2;
         val = val/2;
         i++;
    }
    for(int j = i-1 ; j >=0 ; j--){
        cout<<bin[j]<<" ";
    }
}
int main() {
    decimaltobinary(10);
    return 0;
}