#include <iostream>
using namespace std;
void findGrade(int n){
 if (n>90)
 {
   cout<<"A+"<<endl;
 }
 else if (n>70)
 {
   cout<<"B"<<endl;
 }
 else
 {
    cout<<'c'<<endl;
 }
 
}

int main(){
    int student = 78 , student2= 93;
    findGrade(student);

    findGrade(student2);

    return 0;
}