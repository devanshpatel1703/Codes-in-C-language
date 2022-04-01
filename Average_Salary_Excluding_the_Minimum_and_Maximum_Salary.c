double average(int* a, int n)
{
    int i,max=a[0],min=a[0];
    long double sum=0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==max||a[i]==min){
            continue;
        }
        else{
            sum+=a[i];
        }
    }
    sum=sum/(n-2);
    return(sum);
}
