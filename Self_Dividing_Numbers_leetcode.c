int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int i,count=0,r;
    int* ptr=(int*)malloc((right-left+1)*sizeof(int));
    for(i=left;i<=right;i++){
        if(check(i)){
            ptr[count]=i;
            count++;
        }
    }
    *returnSize=count;
    return ptr;
}
int check(int n)
{
     int num=n,r;
    while(num>0){
        r=num%10;
        if(r==0||n%r!=0){
            return 0;
        }
        num=num/10;
    }
    return 1;
}
