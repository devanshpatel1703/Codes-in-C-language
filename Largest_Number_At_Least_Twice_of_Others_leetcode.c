int dominantIndex(int* a, int n)
{
    int i,max=a[0],index=0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    for(i=0;i<n;i++){
        if(i==index){
            continue;
        }
        if(max<2*a[i]){
            index=-1;
            break;
        }
    }
    return (index);
}
