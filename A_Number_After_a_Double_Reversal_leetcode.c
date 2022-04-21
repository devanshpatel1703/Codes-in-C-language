int rev(int);
bool isSameAfterReversals(int num)
{
    int rev_1,rev_2;
    rev_1=rev(num);
    rev_2=rev(rev_1);
    if(num==rev_2){
        return true;
    }
    return false;
}
int rev(int n)
{
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return (rev);
}
