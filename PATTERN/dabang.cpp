#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int row = 1;
        int j = n - i+1;
        while (j)
        {
            cout<<row;
            j = j - 1;
            row = row + 1;
        }
        int k = i - 1;
        while (k)
        {
            cout<<"*";
            k = k - 1;
        }
        int star = i - 1; 
        while (star)
        {
            cout<<"*";
            star = star - 1;
        }
        int revrow = n - i + 1;
        int l = n - i+1;
        while (l)
        {
            cout<<revrow;
            l = l -1;
            revrow = revrow - 1;
        }
        
        
        
        cout<<endl;
        i = i + 1;
    }
    
}