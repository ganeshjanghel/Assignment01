#include<stdio.h>
int main()
{
    int x,f,m,l,t;
    printf("enter the number ");
    scanf("%d",&x);
    l=x%10;
    f=x/100;
    t=x%100;
    m=t/10;
    printf("\nfirst digit is %d",f);
    printf("\nmiddle digit is %d",m);
    printf("\nlast digit is %d",l);
    printf("\nnew number is %d%d%d",l,f,m);
    return 0;
}