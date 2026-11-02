#include <iostream>
using namespace std;

int checkDup(int arr[], int size){

      for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                return arr[i];
            } 
            
        }
        
    }
    return false;
}
int main(){
    
    int max = 5;
    int arr[max] = {1,5,8,3,9};
    cout<<checkDup(arr,max);
    
}