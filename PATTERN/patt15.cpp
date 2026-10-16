#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = n - i+1;
        while (j)
        {
            cout<<"X";
            j = j - 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
}