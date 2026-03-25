#include <iostream>
using namespace std;
int increment(int &n)
{
    n++;
}
int main()
{
    int a = 10;
    increment(a);
    cout << a;
}