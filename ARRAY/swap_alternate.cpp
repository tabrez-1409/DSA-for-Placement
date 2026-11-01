#include <iostream>
using namespace std;

int main(){
    int max = 8;
    int arr[max] = {1,6,9,5,4,7,3,9};
    int i = 0;
    int j = i +1;
    while (i != max)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
        j = j + 2;
    }

    for (int i = 0; i < max; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}