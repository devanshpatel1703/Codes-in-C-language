int countPairs(int* a, int n, int k)
{
    long long int i,count=0,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                temp=i*j;
                if(temp%k==0){
                    count++;
                }
            }
        }
    }
    return (count);
}
