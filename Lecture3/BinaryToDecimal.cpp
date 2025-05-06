#include <iostream>
using namespace std;
int main()
{
    cout << "enter Binary number :";
    int n;
    cin >> n;

    int decimal=0;
    int power=1;
    while (n>0)
    {   
        int rem=n%10;
        decimal=decimal + rem * power;
        power *=2;
        n/=10;
    }

    cout << "Decimal number Is: " << decimal << endl;
    
    return 0;
    
}