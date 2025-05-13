#include <bits/stdc++.h>
using namespace std;
int lengthAfterTransformations(string s, int t)
{
    while (t--)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'z')
            {
                s.insert(i, "ab");
            }
            else
            {
                // s.insert(int(s[i+1]) );
                s[i] = int(s[i + 1]);
            }
        }
    }

    return s.length();
}

int main()
{
    // cout<<"Enter string :";
    string s = "abcyy";
    // cin>>s;
    int t = 2;
    lengthAfterTransformations(s, t);
    return 0;
}