#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    // Keeping all commented code from original Java file
    // cout << "vaibhav" << endl;

    // cout << "inside for loop" << endl;
    // for(int i=0; i<10; i++){
    //     cout << "vaibhav" << endl;
    // }

    // for(int i=1; i<101; i=i+2){
    //     cout << i << endl;
    // }

    // int b=10;
    // cout << b << endl;
    
    // // post increament
    // b++;
    // cout << b << endl;
    // b--;
    // cout << b << endl;
    
    // // pre increament
    // ++b;
    // cout << b << endl;
    // --b;
    // cout << b << endl;
    
    // //example
    // int n=10;
    // int m=10;
    // int c= m++ + n++;
    // cout << "Result :" << c << endl;
    // c= ++m + ++n;
    // cout << "Result :" << c << endl;

    // // odd 
    // cout << "odd:" << endl;
    // for(int i=1; i<100; i=i+2){
    //     cout << " " << i;
    // }
    // cout << endl;

    // // even
    // cout << "even" << endl;
    // for(int i=0; i<100; i=i+2){
    //     cout << " " << i;
    // }
    // cout << endl;
    // //total sum
    // int sum =0;
    // for(int i=0; i<100; i++){
    //     sum=sum + i;
    // }
    // cout << "sum of all 1 to 100 is :" << sum << endl;

    // cout << endl;

    //factorial
    // cout << "factorial of 5 is: " << factorial(5) << endl;
    
    return 0;
} 