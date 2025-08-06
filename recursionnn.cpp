#include<bits/stdc++.h>
using namespace std;

void func(int i, int n) {
    if(i>n)
    {
        return;
    }
    else {
        cout<<("Suhani")<<endl;
    }
    func(i+1,n);
}
void num(int i,int n)
{
    if(i>n)
    {
        return;
    }
    else{
        cout<<i<<endl;
    }
    num(i+1,n);
}

void revnum(int i,int n)
{
    if(i<1) return;
    else {
        cout<<i<<endl;
    }
    revnum(i-1,n);
}

void btnum(int i,int n)
{
    if(i<1)
        return;
        btnum(i-1,n);
        cout<<i<<endl;
}

void revbtnum(int n)
{
    if(n<1)
    return;

    cout<<n<<endl;
    revbtnum(n-1);
}

void parameterized(int i,int sum)
{
    if(i<1) {
    cout<<(sum);
    return;
    }
    parameterized(i-1,sum+i);
}

int nonparameter(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+ nonparameter(n-1);
    }
}

//void revarr(int i, int arr[], int n)
//{
 //   if(i>=n/2) return;
//
 //   swap(arr[i], arr[n-i-1]);
 //   revarr(i+1,arr,n);
//}
//int main() {
//    int n;
//    cin//>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    cin>>arr[i];
//
//    revarr(0,arr,n);
//    for(int i=0;i<n;i++)
 //   cout<<arr[i]<<" ";
//
 //   return 0;
//}

//bool f(int i, string &s) {
//    if(i>=s.size()/2) return true;
//    if(s[i]!=s[s.size()-i-1]) return false;
//    return f(i+1,s);
//}
//int main() {
//    string s="mamram";
//    cout<<f(0,s);
//    return 0;
//}


int f(int n)
{
    if(n<=1)
    return n;

    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}

int main() {
    int n;
    cin>>n;
    func(1,4);
    return 0;
}