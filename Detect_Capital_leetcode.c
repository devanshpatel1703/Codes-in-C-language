bool detectCapitalUse(char * w)
{
    int i=0,small=0,capital=0,len=0,temp=0;
    if(w[0]>=65&&w[0]<=90){
        temp=1;
    }
    while(w[i]!='\0'){
        len++;
        i++;
    }
    i=0;
    while(w[i]!='\0'){
        if(w[i]>=65&&w[i]<=90){
            capital++;
        }
        else{
            small++;
        }
        i++;
    }
    if((capital==len)||(small==len)||((temp==1)&&(small==len-1))){
       return true; 
    }
    return false;
}
