#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  int k = 3
    int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     arr[n - 1] = arr[i];
    //     arr[i] = tem;
    // }
    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    // reverse the arr
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i=0 ; j =k-1;
    // reverse the remaining element 
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    i=k ; j =n-1;
    // reverse the remaining element 
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    

}