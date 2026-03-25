#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {10, 70, 30, 40, 50};
   int high = marks[0];
   int index = 0;
    for (int i = 0; i <5; i++)
    {
        if (marks[i]>high)
        {
           high = marks[i];
           index = i;
        }
        
    }
    cout<<"index no "<< index<<endl;
    cout<<"hight markn "<<high;
}
