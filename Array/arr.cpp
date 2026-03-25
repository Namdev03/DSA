#include <iostream>
#include <vector>
using namespace std;
 int main(){

    int marks [5] = {10,20,30,40,50};
    int sum =0;
   for (int i = 0; i <5; i++)
   {
    cout<< marks[i]<<endl;
    cout<<&marks[i]<<endl;
    sum+=marks[i];
    
   }
   cout<<sum<<endl;
   cout << "Size: " << sizeof(marks)/sizeof(marks[0]);
}