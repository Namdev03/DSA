#include <iostream>
using namespace std;

int main() {
    // int n = 45;

    // if (n >= 0) {
    //     cout << "This is a positive number: " << n;
    // } else {
    //     cout << "This is a negative number: " << n;
    // }

    //    int age;
    //    cout << "enter your age";
    //    cin>> age;
    //    if (age>=18){
    //     cout<< " you can vote this year";
    //    }
    //    else{
    //     cout<< " you can not vote this year";
    //    }
    //    {
    //     /* code */
    //    }
       
 int n;

    cout << "Enter your number: ";
    cin >> n;

    // if (n % 2 == 0) {
    //     cout << "Your number is even: " << n;
    // }
    // else {
    //     cout << "Your number is odd: " << n;
    // }
     cout<< (n>=0 ? "positive" : "negative") << endl;
    return 0;
}