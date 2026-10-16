#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    
    while (i<=n)
    {
        int row = i;
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        int j = i;
        while (j)
        {
            cout<<row;
            j = j - 1;
            row = row + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
}