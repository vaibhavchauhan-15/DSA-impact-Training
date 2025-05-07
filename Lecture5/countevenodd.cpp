#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,24,32,2,3,2};
    int n=6;
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;

        }else{
            oddcount++;
        }
    }
    cout<<"Even COUnt is :"<<evencount<<endl;
    cout<<"Odd COUnt is :"<<oddcount<<endl;
}