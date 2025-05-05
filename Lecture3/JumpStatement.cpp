#include <iostream>
using namespace std;

int main() {
    // Example of break statement
    cout << "Break Statement Example:\n";
    for(int i = 1; i <= 5; i++) {
        if(i == 3) {
            break; // exits the loop when i is 3
        }
        cout << i << " ";
    }
    cout << "\n\n";

    // Example of continue statement
    cout << "Continue Statement Example:\n";
    for(int i = 1; i <= 5; i++) {
        if(i == 3) {
            continue; // skips iteration when i is 3
        }
        cout << i << " ";
    }
    cout << "\n\n";

    // Example of goto statement
    cout << "Goto Statement Example:\n";
    int num = 1;
start:
    if(num <= 3) {
        cout << num << " ";
        num++;
        goto start;
    }

    return 0;
}