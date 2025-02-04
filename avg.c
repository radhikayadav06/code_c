/*Write a C program to read three test scores of a student of a student and find the
 average of the best two scores.Assume a test score of MM 25 each.
/*

#include<stdio.h>
int main()
{
    int m1,m2,m3,min,total;
    float avg;
    printf("Enter the three test scores:");
    scanf("%d%d%d,m1,m2,m3");
    min=m1;
    if(m2<min)
    {
       min=m2;
    }
    if(m3<min)
    {
       min=m3;
    }
    total=(m1+m2+m3)-min;
    avg=total/2;
    printf("Avg=%f",avg);
    return 0;
}

    output
    
    Enter the three test scores:25,55,20
    avg:40
