int findMiddleIndex(int* a, int n)
{
    long long int i,suml=0,sumr=0,r,l;
    for(i=0;i<n;i++){
        for(l=0;l<i;l++){
            suml+=a[l];
        }
        for(r=i+1;r<n;r++){
            sumr+=a[r];
        }
        if(sumr-suml==0){
            return i;
        }
        sumr=0;
        suml=0;
    }
    return -1;
}
