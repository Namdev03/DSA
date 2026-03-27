#include <iostream>
using namespace std;
 int main(){
  int arr[5] =[10,20,30,40,50]
  int n = arr.size();
  int tem = (n-1);
  for (int i = n-2; i >=0; i++)
  {
     arr[i]= arr[i+1];
  }
  arr[0]=tem;
 }