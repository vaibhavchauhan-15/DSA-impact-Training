#include<iostream>
using namespace std;

int main() {
    cout << "Enter number (Number should be less than 9 digits): ";
    int n;
    cin >> n;
    
    
    int binary = 0;
    int power = 1;
    
    while(n > 0) {
        int rem = n % 2;
        binary = binary + rem * power;
        power =power* 10;
        n = n / 2;
    }
    
    cout << "Binary is: " << binary << endl;
    return 0;
}