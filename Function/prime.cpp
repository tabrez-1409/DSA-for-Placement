#include <iostream>
using namespace std;

void prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout<<"Not Prime no";            
        }
        
    }
    cout<<"Prime No";
    
}

int main(){
    prime(7);
    return 0;
}