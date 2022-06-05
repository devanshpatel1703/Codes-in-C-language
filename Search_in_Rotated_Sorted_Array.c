int search(int* a, int n, int target)
{
    int i,index=-1;
    for(i=0;i<n;i++){
        if(a[i]==target){
            index=i;
            break;
        }
    }
    return (index);
}
