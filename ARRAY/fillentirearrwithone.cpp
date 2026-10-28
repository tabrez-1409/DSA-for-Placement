#include <iostream>
using namespace std;
#define max 10
int arr[max];
void entireValueWithNo()
{
    for (int i = 1; i < max-1; i++)
    {
        arr[i] = 1 + i-i; 
    }
    for (int i = 1; i < max-1; i++)
    {
        cout<<arr[i]<<" "; 
    }
}

int main()
{
    entireValueWithNo();
}