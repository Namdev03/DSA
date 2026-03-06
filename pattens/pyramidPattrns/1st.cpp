#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // increasing numbers
        for (int k = 1; k <= i + 1; k++)
        {
            cout << k;
        }

        // decreasing numbers
        for (int m = i; m >= 1; m--)
        {
            cout << m;
        }

        cout << endl;
    }

    return 0;
}