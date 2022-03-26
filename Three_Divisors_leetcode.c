bool isThree(int n)
{
    int count=2,i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
        if(count==4){
            return false;
        }
    }
    if(count==3){
        return true;
    }
    return 0;
}
