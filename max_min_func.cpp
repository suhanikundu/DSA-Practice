#include<bits/stdc++.h>
using namespace std;


int max(int num1, int num2) {
    if(num1>num2)
    {
        return num1;
    }
    else {
        return num2;
    }
return 0;
}
int main() {
    int num1, num2;
    cin>> num1 >> num2;

    int maximum= max(num1,num2);
    int minimum= min(num1,num2);
    cout<<"The Max no is: "<<maximum<<endl;
    cout<<"The Min no is: "<<minimum;
    

    return 0;
}