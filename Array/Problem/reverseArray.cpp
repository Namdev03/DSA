#include <iostream>
using namespace std;
int main (){
    int arr[5] = {10,20,30,40,50};
   
    for (int i = 0; i < 5/2; i++)
    {
      int temp = arr[i];
      arr[i] = arr[5-1-i];
      arr[5-1-i]= temp;
      return 0;
    }
    

}