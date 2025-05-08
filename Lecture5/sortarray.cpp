#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {120, 24, 32, 2, 3, 2};
    int brr[] = {120, 24, 32, 2, 3, 2};
    int n = 6;
    // int sort[20];
    //accending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] < arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    //decending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (brr[i] > brr[j])
            {
                int temp;
                temp=brr[i];
                brr[i]=brr[j];
                brr[j]=temp;

            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<brr[i]<<" ";
    }
}