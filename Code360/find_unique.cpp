#include <iostream>
using namespace std;


void findUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
      for (int j = 0; j < size; j++)
      {
        if(arr[i] == arr[j]){
            count++;
            ans = arr[j];
        }
      }
      if(count == 1){
        cout<<ans;
      }

    }
}

int main(){
    int size = 7;
    int arr[size] = {1,5,8,1,8,5,7};

    findUnique(arr,size);

    return 0;
}