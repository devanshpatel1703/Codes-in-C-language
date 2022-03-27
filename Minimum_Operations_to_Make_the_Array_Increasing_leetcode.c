int minOperations(int* a, int n)
{
    int i,count=0;
    if(n==1){
        return 0;
    }
    for(i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            while(a[i]>=a[i+1]){
                a[i+1]=a[i+1]+1;
                count++;
            }
        }
    }
    return (count);
}
