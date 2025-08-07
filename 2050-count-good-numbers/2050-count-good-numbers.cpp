class Solution {
public:
const long long mod = 1e9 + 7;

long long myPow(long long x, long long y) {
    if(y==0) return 1;
    long long ans = myPow(x,y/2);
    ans= ans*ans;
    ans= ans%mod;
    if(y%2) ans*=x;
    ans=ans%mod;
    return ans;
}
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        return (myPow(5,even) * myPow(4,odd))%mod;
    }
};