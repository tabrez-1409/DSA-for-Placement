#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {6,8,3,9,4,6,3,6,1};
    int size = 9;
    int large = INT_MIN;
    int ind = 0;
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>large)
        {
            ind = ind+1;
            large = arr[i];
        }
        
    }

    cout<<"Largest " << large<< endl;
    cout<<"Index:- "<<ind << endl;
    
    return 0;
}