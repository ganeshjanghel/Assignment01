#include<stdio.h>
int main() // swap value without third variable
{
    int x,y;
    printf("Enter two number ");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("new number is x=%d and y=%d",x,y);
    return 0;
}