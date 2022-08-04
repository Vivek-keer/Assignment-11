#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int  n;
    printf("Enter the n number: ");
    scanf("%d",&n);
    printf("Sum of series is %d",series(n));
    return 0;
}
int fact(int s)
{
    if(s==1||s==0) return 1;
    return s*fact(s-1);
}
series(int q)
{
    int x,sum=0;
    for(x=1;x<=q;x++)
    {
        sum=sum+fact(x)/x;
    }
    return sum;
}
