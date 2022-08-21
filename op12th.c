#include<stdio.h>
int main()// 12. assume price of 1 usd is inr 76.23. write a program to take the amount in inr convert it into usd. 
{
    float INR,USD;
    printf("enter the INR value ");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("price of USD is %f",USD);
    return 0;
}