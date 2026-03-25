#include <iostream>
#include <vector>
using namespace std;
int main()
{
   //linner search
    int marks[5] = {10, 20, 30, 40, 50};
    int mark= 40;
    for (int i = 0; i <5; i++)
    {
        if (marks[i]==mark)
        {
            cout<<"mark is match";
           return 0;
        }
     
    }
   cout<<"not match";
    
}