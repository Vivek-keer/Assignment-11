#include <stdio.h>
int HCF(int,int);

int main()
{
    int x,y;
    printf("Enter the two number: "); scanf("%d%d",&x,&y);

    printf("HCF is %d",HCF(x,y));
    return 0;
}
int HCF(int a,int b)
{
    int r=1,n;
    n=a<b?a:b;
    while(n>=1)
        {
            if(a%n==0&&b%n==0)
            { r=r*n; break;}
            else n--;
        }
        return r;
}




