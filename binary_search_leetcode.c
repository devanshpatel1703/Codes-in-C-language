int search(int* a, int n, int target)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
