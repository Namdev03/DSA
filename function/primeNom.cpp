#include <iostream>
using namespace std;

void primeNo(int n)
{
    bool isprime = true;

    for (int i = 2; i < n; i++)   // FIXED HERE
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (n <= 1)
        isprime = false;

    if (isprime)
    {
        cout << n << " is prime number" << endl;
    }
    else
    {
        cout << n << " is not prime number" << endl;
    }
}

int main()
{
    int number = 10;
    primeNo(number);
}