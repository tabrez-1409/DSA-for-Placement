//LEET 1207
#include <iostream>
using namespace std;

int main(){
    int max = 7;
    int arr[max] = {1,2,4,3,4,3,2};
    int maintainIarr[max];
    int arr2[max];
    int k = 0;
    int l = 0;
    for (int i = 0; i < max; i++)
    {
        int found = 0;
        for (int m = 0; m < l; m++)
        {
            if (maintainIarr[m]==arr[i])
            {
                found = 1;
                break;
            }
            
        }
        if (found == 1)
        {
            continue;
        }
        
        
        int count = 0;
        for (int j = 0; j < max; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            
        }
            arr2[k] = count;
            k++;
        maintainIarr[l] = arr[i];
        l++;
    }
    
    for (int n = 0; n < k; n++)
    {
        for (int o = n+1; o < k; o++)
        {
            if (arr2[n]==arr2[o])
            {
                cout<<"Not Unique Occurence";
                return 0;
            }
            
        }
        
        
    }
cout<<"Unique Occurence";

return 0;
}