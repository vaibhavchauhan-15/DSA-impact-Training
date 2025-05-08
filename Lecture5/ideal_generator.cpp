#include <iostream>
using namespace std;

void solve() {
    int num;
    cin >> num;
    
    if (num % 2 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}
