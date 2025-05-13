#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    for(int i = s.length() - 1; i >= 0; i--){
        cout<<s[i];
    }
    cout<<endl;
}

void palindrome(string s){//using loop

    string st;
    int i=0;
    int j=s.length()-1;
    while (i<j)
    {   

        swap(s[i],s[j]);
        
    }
    
    if(s == st){
        cout << "palindrome" << endl;
    }else{
        cout << "not palindrome" << endl;
    }
}


void palindromeTwoPoointer(string s){//using loop

    string st;
    for(int i = s.length() - 1; i >= 0; i--){
        st += s[i];
    }
    if(s == st){
        cout << "palindrome" << endl;
    }else{
        cout << "not palindrome" << endl;
    }
}

int main(){
    string s1="hello";
    string s2="hello";
    string s="Vaibhav";
    string pal ="naman";
    string s3=  s1 ;

    if(s1==s2){
        cout<<"true"<<endl;
    }else {
        cout<<"false"<<endl;
    }

    // Convert s1 to uppercase
    for(auto& c :s1){
        c=toupper(c);
    }
    cout<<s1<<endl;

      for(auto& c :s){
        c=tolower(c);
    }
    cout<<s<<endl;

    // Get substring from index 1
    string s4 = s1.substr(1);
    cout << s4 << endl;

    string s5 = s2.substr(1,3);
    cout<<s5<<endl;
    reverse(s);
    palindrome(pal);
}