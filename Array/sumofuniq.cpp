#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 3, 5, 6};
    int sum = 0;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            sum += arr[i];
        }
    }
    return sum;
}
