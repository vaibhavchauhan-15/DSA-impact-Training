#include <iostream>
using namespace std;

int main() {
    int age = 17;
    string result = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout << result << endl;  
    return 0;
} 