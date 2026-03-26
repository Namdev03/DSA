#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4};
 
    for (int i = 1; i < 5; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}