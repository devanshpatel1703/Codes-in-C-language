int findFinalValue(int* a, int n, int original)
{
    long long int i;
    for(i=0;i<n;){
        if(a[i]==original){
            original*=2;
            i=0;
        }
        else{
            i++;
        }
    }
    return (original);
}
