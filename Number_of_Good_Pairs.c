int numIdenticalPairs(int* a, int n)
{
    long long int i,count=0,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    return (count);
}
