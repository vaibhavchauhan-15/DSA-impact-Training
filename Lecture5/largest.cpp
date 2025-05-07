#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 24, 32, 2, 3, 2};
    int n = 6;
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > max)
        {

            max = arr[i];
        }
    }
    cout << max << endl;
}