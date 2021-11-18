#include <stdio.h>
#include <math.h>
int main()
{
    int h1,m1,s1,t1,t2,t3,total_time,h2,m2,s2,h3,m3, s3,h4,m4,s4;
    printf("Enter the time when you started coding :");
    scanf("%d %d %d",&h1,&m1,&s1);
    t1=h1*3600+m1*60+s1;
    printf("Enter the time when you finished coding :");
    scanf("%d %d %d",&h2,&m2,&s2);
    t2=h2*3600+m2*60+s2;
    printf("Enter the time consumed for correcting the code :");
    scanf("%d %d %d",&h3,&m3,&s3);
    t3=h3*3600+m3*60+s3;
    total_time=(t2-t1)+t3;
    h4=total_time/3600;
    total_time=total_time%3600;
    m4=total_time/60;
    total_time=total_time%60;
    s4=total_time;
    printf("The time elapsed is %d Hr %d Min %d Sec.",h4,m4,s4);
    return 0;
}
