#include<iostream>
using namespace std;
int main(){
  cout<<"enter number :";
  int n;
  cin>>n;
  int sum=0;
  while (n>0)
  {
    int rem=n%10;
    sum=sum + rem;
    n=n/10;
  }
  cout<<"Sum of all number is:"<<sum<<endl;
    
}