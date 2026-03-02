#include <iostream>
using namespace std;

int main() {
    // int n;
    // int count = 1;

    // cout << "Enter your number: ";
    // cin >> n;

    // while (count <= 10) {
    //     cout << n << " x " << count << " = " << n * count << endl;
    //     count++;
    // }
//  while (count <=n){
//     cout<<count<<endl;
//     count++;
//  }
//  {
//     /* code */
//  }/
// for ( int i = 1; i <=n; i++)
// {
//     cout<<"your number is" << i << endl;
// }
// int n ;
//  int sum=0 ;
//  cout<< "enter number";
//  cin>> n;
//  for (int i = 0; i <=n ; i++)
//  {
//    sum = i*n ;
//  }
//  cout<< sum ;
// int n;
//     int sum = 0;

//     cout << "Enter your number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 != 0) {
//             sum += i;
//         }
//     }

//     cout << "Sum of odd numbers from 1 to " << n << " is: " << sum;
int n =9;
bool isPrime = true;
for (int i = 2; i <n-1; i++)
{
  if (n % i ==0){
  isPrime = false;
  break; /* code */
  }
  
}
if (isPrime == true){
    cout<< " it is prime number";

}
else{
    cout<< " it is nit prime number";
}
    return 0;
}