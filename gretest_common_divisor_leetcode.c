int findGCD(int* a, int n)
{
    int min,max,i,temp;
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    if(max==min){
        return (max);
    }
    for(i=1;i<=max/2;i++){
        if((max%i==0)&&(min%i==0)){
            temp=i;
        }
    }
    return (temp);
}
