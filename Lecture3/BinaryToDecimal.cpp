#include <iostream>
using namespace std;
int main()
{
    cout << "enter Binary number :";
    int n;
    cin >> n;

    int decimal=0;
    int power=0;
    while (n>0)
    {   
        int rem=n%10;
        decimal=decimal + rem + power;
        power +=10;
        n+=10;
    }

    
    


}