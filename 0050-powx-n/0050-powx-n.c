double myPow(double x, int n) {
    double ans = 1.0;
    long long nn = n;

    if(nn<0) {
        x = 1/x;
        nn = -nn;
    }
    while(nn>0) {
        if(nn%2 == 1)
        {
            ans = ans * x;
            nn--;
        } else{
            x = x*x;
            nn = nn/2;  //for making it even
        }
    }
    return ans;
}