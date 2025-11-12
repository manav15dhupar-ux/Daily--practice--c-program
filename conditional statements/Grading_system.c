#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90)
    {
        printf("Grade:A");
    }
    else if(marks<90 && marks>=75)
    {
        printf("Grade:B");
    }
    else if(marks<75 && marks>=60)
    {
        printf("Grade:C");
    }
     else if(marks<60 && marks>=0)
    {
        printf("Grade:D");
    }
    else
    {
        printf("Enter valid marks.");
    }
  
return 0;
}