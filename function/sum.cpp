#include <iostream>
using namespace std; 

int sumOfn(int n){
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {
       sum+=i;
    }
   return sum;
} 
int main(){
cout<<sumOfn(6) <<endl;
return 0;

}