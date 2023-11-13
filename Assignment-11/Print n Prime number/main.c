#include <stdio.h>
#include <stdlib.h>
void nprime(int);
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    nprime(a);
    return 0;
}
void nprime(int count)
{
    int n,h,r;
    for(n=2,r=0;r<count;n++)
    {
        h=n/2;
        while(h>1)

            if(n%h==0) break;
            else h--;
        if(h==1)
        {
                   printf("%d ",n); r++;
        }
    }
}
