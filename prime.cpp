#include <iostream>
using namespace std;

int main() {
//     int n ;
//     bool isPrime = true;
//    cin>> n;
  

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true) {
//         cout << "It is a prime number";
//     }
//     else {
//         cout << "It is not a prime number";
//     }
 int n ;
 cin>> n;
 for (int i = 2; i*i <=n; i++){
 if (n%i != 0){
    cout<<"the number is prime number";
 }
 else{
    cout<<"not prime";
 }
 }
 
    return 0;
}