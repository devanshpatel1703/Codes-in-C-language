int maximum69Number (int num)
{
    int i,count=0,rev_num=0;
    int temp=num;
    while(temp){
        rev_num=rev_num*10+(temp%10);
        temp/=10;
        count++;
    }
    int a[count];
    for(i=0;i<count;i++){
        a[i]=rev_num%10;
        rev_num/=10;
    }
    for(i=0;i<count;i++){
        if(a[i]==6){
            a[i]=9;
            break;
        }
    }
    for(i=0;i<count;i++){
        temp=temp*10+a[i];
    }
    return temp;
}
