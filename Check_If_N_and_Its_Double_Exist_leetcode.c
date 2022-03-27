bool checkIfExist(int* a, int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i){
                continue;
            }
            if(a[i]==2*a[j] || a[j]==2*a[i]){
                return true;
            }
        }
    }
    return false;
}
