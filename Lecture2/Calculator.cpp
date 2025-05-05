#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operator_char;
    
    cout << "Enter first number:" << endl;
    cin >> a;
    
    cout << "Enter second number:" << endl;
    cin >> b;
    
    cout << "Enter operator (+, -, *, /):" << endl;
    cin >> operator_char;
    
    switch (operator_char) {
        case '+':
            cout << "Result: " << (a + b) << endl;
            break;
        case '-':
            cout << "Result: " << (a - b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << (a / b) << endl;
            } else {
                cout << "Cannot divide by zero!" << endl;
            }
            break;
        case '*':
            cout << "Result: " << (a * b) << endl;
            break;
        default:
            cout << "Enter valid operator" << endl;
            break;
    }
    
    return 0;
} 