#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)  // changed condition to create triangle
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}