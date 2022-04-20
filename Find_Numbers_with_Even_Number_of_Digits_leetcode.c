int even(int);
int findNumbers(int* a, int n)
{
    int i,check,count=0;
    for(i=0;i<n;i++){
        check=even(a[i]);
        if(check==1){
            count++;
        }
    }
    return (count);
}
int even(int num)
{
    int c=0;
    while(num>0){
        num/=10;
        c++;
    }
    if(c%2==0){
        return 1;
    }
    return 0;
}
