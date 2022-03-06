int arrangeCoins(int n)
{
    long long int i=1,sum=0;
    for(i=1;;i++){
        sum=sum+i;
        if(sum==n){
            return (i);
        }
        if(sum>n){
            return (i-1);
        }
    }
    return 0;
}
