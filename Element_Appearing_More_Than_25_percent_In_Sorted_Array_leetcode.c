int findSpecialInteger(int* a, int n)
{
    int i,size=0.25*n,j,count=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>size){
            return (a[i]);
        }
        count=1;
    }
    return 0;
}
