#include <iostream>
using namespace std;
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
}
int main()
{
    int num = 5;
    int num2 = 6;
    int num3 = 7;
    factorial(num2);
    factorial(num);
    factorial(num3);
}