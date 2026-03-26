#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[7] = {1,2,3,5,6};
   int sum = 0;
   int size = arr.size();
   long long n = size+1;
   for (int i = 0; i <size; i++)
   {
    sum +=arr[i];
   }
   n = n*(n+1)/2;
   return n-sum;
   
}