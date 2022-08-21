#include<stdio.h>
int main()//11. write a program to input a number from the user and also input a digit. append a digit in the number and print the resulting number. (example - number=234 and digit=9 then the resulting number is 2349) 
{
    int x,y;
    printf("enter the number= ");
    scanf("%d",&x);
    printf("and\ndigit= ");
    scanf("%d",&y);
    printf("resulting number is %d%d",x,y);
    return 0;
}