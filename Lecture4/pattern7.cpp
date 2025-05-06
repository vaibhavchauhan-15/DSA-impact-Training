#include <iostream>
using namespace std;
int main()
{
    int n = 5;
 
    
    // Lower part of the diamond
    for (int row = n - 1; row >= 1; row--)
    {
        // Print spaces
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        
        // Print stars
        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}