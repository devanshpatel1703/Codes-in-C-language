int arraySign(int* a, int n)
{
    long long int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            return 0;
        }
        if(a[i]<0){
            count++;
        }
    }
    if(count%2!=0){
        return -1;
    }
    return 1;
}
