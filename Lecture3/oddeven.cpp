#include<iostream>
using namespace std;
int main(){
    cout<<"enter nnumber(Number should be less than 9 digits):";
    int n;
     cin>>n;
    int even=0;
    int odd=0;
    while (n>0)
    {
        int rem = n%10;
        if(rem%2==0){
            even=even+rem;
        }else{
            odd=odd+rem;
        }
        n=n/10;
    }

    cout<<"sum of even number is :"<<even<<endl;
    cout<<"sum of odd number is :"<<odd<<endl;
    
}