int specialArray(int* a, int n)
{
    int i,max=a[0],count=0,j;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(i=1;i<=max;i++){
        for(j=0;j<n;j++){
            if(a[j]>=i){
                count++;
            }
        }
        if(count==i){
            return(i);
        }
        count=0;
    }
    return (-1);
}
