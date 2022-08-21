#include<stdio.h>
int main()
{
    int x,f,m,l,t,sum;
    printf("enter the number ");
    scanf("%d",&x);
    l=x%10;
    f=x/100;
    t=x%100;
    m=t/10;
    sum=f+m+l;
    printf("\nfirst digit is %d",f);
    printf("\nmiddle digit is %d",m);
    printf("\nlast digit is %d",l);
    printf("\nsum of digits are %d",sum);
    return 0;
}