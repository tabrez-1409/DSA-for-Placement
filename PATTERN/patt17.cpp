#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space != 0)
        {
            cout<<" ";
            space = space - 1;
        }
    
        int row = i;
        int j = n - i+1;
        while (j)
        {
            cout<<row;
            j = j - 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
}