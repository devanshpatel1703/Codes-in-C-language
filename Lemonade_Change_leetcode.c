bool lemonadeChange(int* bill, int n)
{
    int i,five=0,ten=0,twenty=0;
    for(i=0;i<n;i++){
        if(bill[i]==5){
            five++;
        }
        if(bill[i]==10){
            ten++;
            if(five<=0){
                return false;
            }
            five--;
        }
        if(bill[i]==20){
            if(five>=1&&ten>=1){
                five--;
                ten--;
            }
            else if(five>=3&&ten<=0){
                five=five-3;
            }
            else if(five<=0){
                return false;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
