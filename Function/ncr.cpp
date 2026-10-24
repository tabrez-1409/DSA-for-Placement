#include <iostream>
using namespace std;

int fact(int n){
    int fat = 1;
    for (int i = n; i >= 1; i--)
    {
        fat = fat*i;
    }
    return fat;
}

int ncr(int n ,int r){
    int numerator = fact(n);
    int denominator = fact(r) * fact(n-r);

    return numerator/denominator; 
}
int main(){
    cout<<ncr(2,1);
}

