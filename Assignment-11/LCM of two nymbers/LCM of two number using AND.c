//LCM OF TWO NUMBERS using And relational operator
#include <stdio.h>
int lcm(int,int);
int main()
{
    int x,y;

    printf("Enter the two numbers\n");
    scanf("%d%d",&x,&y);
    printf("LCM is %d",lcm(x,y));
    printf("\n");
    return 0;
}
int lcm(int a,int b)
{
    int i,ans=1,st1,st2;
     for(i=2;i<=a*b;i++)
    {
        st1=0;st2=0;
        if(a>1) st1=a%i==0; if(b>1) st2=b%i==0;
        if(st1&&st2)
        {
            a=a/i;  b=b/i;
            ans*=i; i--;
        }
        else  if(st1)
        {
            a=a/i;
            ans*=i; i--;
        }
        else  if(st2)
        {
            b=b/i;
            ans*=i; i--;
        }
    }
    return ans;
}
