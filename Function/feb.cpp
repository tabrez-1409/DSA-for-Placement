#include <iostream>
using namespace std;

void feb(int n){
    int a = 0;
    int b = 1;
    int i = 0;
    while (i<=n)
    {
        cout<<a<<" ";
        int next = a+b;
        a = b;
        b = next;
        i++;
    }

}

int main(){
    feb(8);
    return 0;
}