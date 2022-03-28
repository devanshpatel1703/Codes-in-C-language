int sumOfUnique(int* a, int n)
{
    int i,sum=0,temp,j;
    for(i=0;i<n;i++){
        temp=1;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else if(a[i]==a[j]){
                temp=0;
                break;
            }
        }
        if(temp==1){
            sum+=a[i];
        }
    }
    return (sum);
}
