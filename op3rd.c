#include<stdio.h>
int main() //3. write a program to swap values of two int variables 
{
    int x,y,z;
    printf("Enter two number ");
    scanf("%d %d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("new number is x=%d and y=%d",x,y);
    return 0;
}