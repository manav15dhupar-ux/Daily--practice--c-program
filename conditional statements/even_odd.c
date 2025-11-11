#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Number %d is a even number.",num);
    }
    else
    {
        printf("Number %d is a odd number.",num);
    }
return 0;
}