int smallestEqual(int* a, int n)
{
    int i;
    for(i=0;i<n;i++){
        if(i%10==a[i]){
            return i;
        }
    }
    return -1;
}
