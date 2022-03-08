bool isPowerOfFour(int n)
{
    long long int i=1,count=0;
    while(i<n){
        i=i*4;
        count++;
    }
    if(pow(4,count)==n){
        return true;
    }
    else{
        return false;
    }
    return 0;
}
