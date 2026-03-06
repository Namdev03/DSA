#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        // print spaces
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        // print characters
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}