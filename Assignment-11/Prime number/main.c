#include <stdio.h>
int prime(int);

int main()
{
    int x;
    printf("Enter the two number: "); scanf("%d",&x);

     switch(prime(x))
     {
         case 0: printf("Prime number"); break;
         case 1: printf("Not Prime number");
     }
    return 0;
}
 int prime(int x)
{
    int n;
    for(n=x/2;n>1;n--)
    {if(x%n==0) return 1;}
    return 0;
}

