#include <iostream>
using namespace std;

int main(){
    int max = 4;
    int f = 0;
    int r = max - 1;
    int arr[max] = {1,5,7,8};
    
    while (f<r)
    {
        int temp = arr[f];
        arr[f] = arr[r];
        arr[r] = temp;
        f++;
        r--;
    }
    for (int i = 0; i < max; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}