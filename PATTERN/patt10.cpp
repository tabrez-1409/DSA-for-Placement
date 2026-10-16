#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        char rh = 'A' + i-1;
        int j = 1;
        while (j<=i)
        {
            cout<<rh<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
}