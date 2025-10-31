#include<stdio.h>

int main()
{
    int age,citizen;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Are you citizen (1 for yes/0 for no):");
    scanf("%d",&citizen);
    printf("%d",age>=18 && citizen==1); // 1 will be printed if the person is eligible to vote otherwise 0 will be printed
return 0;
}