double myPow(double x, int n)
{
    double r;
    long long int m;
    m=n;
    if(m<0){
        m=m*(-1);
        r=1/pow(x,m);
    }
    else{
        r=pow(x,m);
    }
    return (r);
}
