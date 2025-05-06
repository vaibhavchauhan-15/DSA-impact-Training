#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Print spaces 
        for (int space = 0; space < row; space++)
        {
            cout << "  ";
        }
        
        // Print stars
        for (int col = 0; col <= n-row-1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}