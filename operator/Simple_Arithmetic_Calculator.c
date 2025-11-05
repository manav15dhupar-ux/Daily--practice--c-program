#include<stdio.h>

int main()
{
    //Simple Arithmetic Calculator
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2); //num1 should be greater than num2

    printf("Addition:%d\n",num1+num2);
    printf("Subtraction:%d\n",num1-num2);
    printf("Product:%d\n",num1*num2);
    printf("Division:%d\n",num1/num2);
    printf("Reminder:%d\n",num1%num2);

    
return 0;
}