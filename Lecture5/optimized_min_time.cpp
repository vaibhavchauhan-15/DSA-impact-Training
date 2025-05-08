#include <bits/stdc++.h>
using namespace std;

int balanceLight(int n, int c[]) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            count0++;
        } else if (c[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }
    int sum1 = count0 + count1;
    int sum2 = count0 + count2;
    if (sum1 == count2) {
        cout << "Yes" << endl;
    } else if (sum2 == count1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return -1;
}

int main() {
    // your code goes here
    int t; //no of test cases
    cin >> t;
    
    while (t--) {
        int n; //no of lights
        cin >> n;
        int c[n];
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        balanceLight(n, c);
    }
    return 0;
}
