#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j] >key){
            arr[j +1 ] =arr[j];
            j=j-1;
            arr[j + 1] =key;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={12 , 11, 13 , 5 ,6};
    int n=5;
    insertionSort(arr , n);

}