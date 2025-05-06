#include <iostream>
using namespace std;

void printButterflyPattern(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print stars in the beginning
        for (int j = 1; j <= i; j++) {  // Changed j < i to j <= i
            cout << "*";
        }
        
        // Print spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Print stars at the end
        for (int j = 1; j <= i; j++) {  // Changed j < i to j <= i
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part of the butterfly (mirror image of upper part)
    for (int i = n-1; i >= 1; i--) {  // Start from n-1 to avoid duplicate middle line
        // Print stars in the beginning
        for (int j = 1; j <= i; j++) {  // Changed j < i to j <= i
            cout << "*";
        }
        
        // Print spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Print stars at the end
        for (int j = 1; j <= i; j++) {  // Changed j < i to j <= i
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of butterfly pattern: ";
    cin >> n;
    printButterflyPattern(n);
    return 0;
}