#include<stdio.h>

int main()
{
    int x;
    printf("x:");
    scanf("%d",&x);
    printf("Pre-increment:%d\n",++x); // increment first then print
    printf("After Pre-increment:%d\n",x);
    printf("Post-increment:%d\n",x++);  //print first then incriment
    printf("After Post-incremen:t%d\n",x);

    printf(".............................\n");

    int v;
    printf("v:");
    scanf("%d",&v);
    printf("Pre-decrement:%d\n",--v);  //decrement first then print
    printf("After Pre-decrement:%d\n",v);
    printf("Post-decrement:%d\n",v--);  //print first then decrement
    printf("After Post-decrement:%d\n",v);


    
return 0;
}