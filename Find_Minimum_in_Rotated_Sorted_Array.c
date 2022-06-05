int findMin(int* a, int n)
{
    int ans=a[0],i;
    for(i=1;i<n;i++){
        if(a[i]<ans){
            ans=a[i];
        }
    }
    return (ans);
}
