/*
below 25= F
25 to 44= E
45 to 49= D
50 to 59= C
60 to 79= B
80 to 100= A*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;

    if(num<25) {
        cout<<"F";
    }
    else if(num<=44) {
        cout<<"E";
    }
    
    else if(num<=49) {
        cout<<"D";
    }
    else if(num<=59) {
        cout<<"C";
    }
    
    else if(num<=79) {
        cout<<"B";
    }
    
    else if(num<=100) {
        cout<<"A";
    }
}