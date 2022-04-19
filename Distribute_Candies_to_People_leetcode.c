int* distributeCandies(int candies, int num_people, int* returnSize)
{
    long long int i=1,j=0;
    int* ptr=(int*)calloc(num_people,sizeof(long long int));
    while(candies){
        if(candies<=i){
            ptr[j]+=candies;
            break;
        }
        ptr[j]+=i;
        j++;
        if(j==(num_people)){
            j=0;
        }
        candies-=i;
        i++;
    }
    *returnSize=num_people;
    return (ptr);
}
