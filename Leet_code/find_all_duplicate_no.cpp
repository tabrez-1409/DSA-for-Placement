//LEET 448
#include <iostream>
using namespace std;

int main(){
    int max = 7;
    int arr[max] = {1,2,4,3,4,3,2};
    int arr2[max];
    int k = 0;
    for (int i = 0; i < max; i++)
    {
        int count = 0;
        for (int j = i+1; j < max; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            arr2[k] = arr[i];
            k++;
        }
        
    }
    for (int i = 0; i < k; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
}