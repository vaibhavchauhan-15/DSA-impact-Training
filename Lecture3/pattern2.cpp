#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Print spaces (decreasing with each row)
        for (int space = 0; space < n-row-1; space++)
        {
            cout << "  ";
        }
        
        // Print stars (increasing with each row)
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}