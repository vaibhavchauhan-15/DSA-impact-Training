#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number :";
    int n;
    cin >> n;
    //printing rows
   for(int row=0;row<n;row++){
        //printing space
        for(int space=0;space<n-row-1; space++){
            cout<<" ";
        }
        //printing stars
        for(int star=0;star<2*row+1;star++){
            cout<<"*";
        }
        cout<<endl;
   }
    return 0;
}