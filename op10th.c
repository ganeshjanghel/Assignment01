#include<stdio.h>
int main() //10. write a program to make the last digit of a number stored in a variable as zero. (example - if x=2345 then make it x=2340) 
{
    int x,y,z;
    printf("enter the number ");
    scanf("%d",&x);
    y=x/10;
    z=y*10;
    printf("\nnew number is %d",z);
    return 0;
}