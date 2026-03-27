#include <iostream>
using namespace std;
 int main(){
     int marks [5] = {10,20,30,40,50};
     int temp = arr[0];
     for (int i = 0; i <5; i++)
     {
        if (arr[i]>temp)
        {
           temp = arr[i];
        }
        
     }
     int secondLargest = -1;
     for (int i = 0; i < 5; i++)
     {
       if (arr[i]==secondLargest)
       {
        continue;
       }
       else if (arr[i]>secondLargest)
       {
        secondLargest = arr[i];
       }
       
       
     }
     
     
 }
