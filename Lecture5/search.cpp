#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,24,32,2,3,2};
    int n=6;
    int num;
    cout<<"Enter a number want to search :";
    cin>>num;
    bool found=false;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            cout<<"Present at index :"<<i<<endl;
            found=true;
        }
    }
    if(found==false){

        cout<<"NOt found!!!!!!"<<endl;
    }
}