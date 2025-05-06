#include <iostream>
using namespace std;
int main()
{
    // cout << "Enter number :";
    int n = 5;
    // cin >> n;
    // printing rows
    for (int row = 0; row < n; row++)
    {

        // printing stars
        for (int star = 0; star <= row; star++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int row = n - 1; row > 0; row--)
    {
        // printing reverse stars
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}