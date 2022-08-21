#include<stdio.h>
int main() // 8. write a program to check whether the given number is even or odd using a bitwise operator.
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
   if((x&2)==0)
     {
        printf("number %d is even",x);
    }
    else
    {
         printf("number %d is odd",x);
    }
    return 0;
}