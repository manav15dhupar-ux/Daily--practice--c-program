#include<stdio.h>

int main()
{
    int num1,num2;
    
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("first number is greater then second(%d>%d)",num1,num2);
    }
    else if(num2>num1)
    {
        printf("second number is greater then first(%d>%d)",num2,num1);
    }
    else
    {
        printf("Both number are same.(%d=%d)",num1,num2);
    }


return 0;
}