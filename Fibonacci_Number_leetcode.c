int fib(int n)
{
    int i,sum=0;
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    int first=0,sec=1;
    for(i=3;i<=n+1;i++){
        sum=first+sec;
        first=sec;
        sec=sum;
    }
    return (sum);
}
