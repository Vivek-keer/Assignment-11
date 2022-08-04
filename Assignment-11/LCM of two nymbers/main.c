#include <stdio.h>
int LCM(int,int);

int main()
{
    int x,y;
    printf("Enter the two number: "); scanf("%d%d",&x,&y);

    printf("LCM is %d",LCM(x,y));
    return 0;
}
int LCM(int a,int b)
{
    int r=1,n=2;
    while(a>1||b>1)
        {
            if(a%n==0||b%n==0)
            {
                r=r*n;
             if(a%n==0) a=a/n;
             if(b%n==0) b=b/n;
             }

            else n++;
        }
        return r;
}
