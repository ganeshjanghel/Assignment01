#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=x%10;
    printf("unit digit is %d",y);
    return 0;
}