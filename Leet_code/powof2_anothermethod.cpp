#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp>>1;
        if(digit&1){
            count = count + 1;
        }

        temp = temp>>1;
    }
    if(count == 1){
            cout<<"YES Power of 2";
        } 
        else{
            cout<<"NO";
        }
}