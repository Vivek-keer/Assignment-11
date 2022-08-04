#include <stdio.h>

void nprim(int,int );
int main()
{
    int n,m;
    printf("Enter the two number: "); scanf("%d%d",&m,&n);

      nprim(m,n);
    return 0;
}
 void nprim(int x,int y)
{
    int n;
    for(x=x+1;x<y;x++)
    {
        for(n=x/2;n>0;n--)
      {

        if(n==1) { printf("  %d  ",x); break; }
        else if(x%n==0) break;
      }

    }
}



