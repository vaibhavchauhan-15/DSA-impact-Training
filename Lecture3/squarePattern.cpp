#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;

    int row = n;
    int col = n;
    for (int i = 0; i < row; i++)
    {
        for (int i = 0; i < col; i++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}