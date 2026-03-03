#include <iostream>
using namespace std;
int main (){
    int n = 4;
    for (int i = 1; i<=n; i++) // outer LOOP column ke liye
    {
        for (int j=1; j<=n; j++) //inner Loop rows ke liye
        {
            cout << j<< " ";
        }
        cout<< endl;
    
    }
    return 0;
}