#include<bits/stdc++.h>
using namespace std;

float discount(bool member, float amount){
    if(member == true && amount > 5000){
        return amount * (20.0/100);
    } else if(member == true && amount <= 5000){
        return amount * (10.0/100);
    } else{
        return amount * (5.0/100); 
    }
}

int main(){
    bool member;
    cout << "member? (1, 0 ): ";
    cin >> member;
    
    float amount;
    cout << "amount: ";
    cin >> amount;
    
    float discountAmount = discount(member, amount);
    // float finalAmount = amount - discountAmount;
    
    cout << "Discount: " << discountAmount << endl;
    // cout << "Final amount after discount: " << finalAmount << endl;
    
    return 0;
}