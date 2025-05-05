#include <iostream>
using namespace std;

int main() {
    int num = 1;
    while (num <= 100) {
        cout << num << " ";
        if(num==5){
            num++;
            continue;
        }
        num++;
    }
    cout << endl;
    return 0;
}