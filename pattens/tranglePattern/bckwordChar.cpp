#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;

        for (int j = i; j >= 0; j--)
        {
            cout << ch << " ";
            ch--;
        }
        
    cout << endl;
        // Reverse order (C→B→A)
    }


    return 0;
}