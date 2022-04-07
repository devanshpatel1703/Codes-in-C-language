int findLucky(int* a, int n)
{
    int i,max=a[0],ans=-1;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int c[max+1];
    for(i=0;i<max+1;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    for(i=1;i<max+1;i++){
        if(c[i]==i){
            ans=i;
        }
    }
    return (ans);
}
