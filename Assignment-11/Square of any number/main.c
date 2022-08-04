#include <stdio.h>
#include <stdlib.h>
int square(int);
int main()
{
    int x,y,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Square of given number is %d",square(n));
    return 0;
}
int square(int s)
{
    return s*s;
}
