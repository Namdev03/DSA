#include <iostream>
using namespace std;
void printValue(int a[] , int n){
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<endl;
  }
  a[0]=90;
  
}
int main(){
    int arr[5] = {10,20,30,40,50};
    printValue(arr,5);
    // cout<<arr[0];
    return 0;
}
