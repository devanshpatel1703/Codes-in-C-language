bool canMakeArithmeticProgression(int* a, int n)
{
    int i,temp,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int constant=a[1]-a[0];
    for(i=1;i<n-1;i++){
        if(a[i+1]-a[i]!=constant){
            return false;
        }
    }
    return true;
}
