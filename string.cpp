#include<bits/stdc++.h>
using namespace std;

int main() {
    string str="Suhani";
    int len=str.size();
    cout<<len<<endl;
    str[len-1]='u';
    cout<<str<<endl;
    cout<<str[len-1];
    return 0;
}