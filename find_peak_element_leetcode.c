int findPeakElement(int* a, int n )
{
    int i,max=a[0],index=0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    return (index);
}
