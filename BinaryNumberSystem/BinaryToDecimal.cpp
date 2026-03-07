#include <iostream>
using namespace std;
int BinaryTodec( int BiNum){
    int ans = 0 , pow=1;
    while (BiNum>0)
    {
       int rem = BiNum%2;
       ans += rem*pow;
       BiNum = BiNum /10;
       pow = pow*2;
    }
    return ans;
}
int main (){
    int BiNum = 10101;
    cout<<BinaryTodec(BiNum)<<endl;
}