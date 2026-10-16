#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        int j = i;
        int row = 1;
       
        while (j)
        {
            cout<<row;
            j = j -1;
            row = row + 1;
        }

        int k = i - 1;
        while (k)
        {
            cout<<k;
            k = k - 1; 
        }
        cout<<endl;
        i = i + 1;
    }
    
}