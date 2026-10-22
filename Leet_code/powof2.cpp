#include <iostream>
#include <cmath>
using namespace std;

int powof2(int val)
{
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == val)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    cout << powof2(7) << " ";
    return 0;
}