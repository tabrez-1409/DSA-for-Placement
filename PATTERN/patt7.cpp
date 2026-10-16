#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char rh = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = rh + j-1;
            cout<<ch<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
}