#include <iostream>
using namespace std;

void findUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }

    cout<<ans<<" ";
    
}
int main(){
    int size = 7;
    int arr[size] = {1,5,8,1,8,5,9};
    
    findUnique(arr,size);

    return 0;

}