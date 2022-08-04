#include <stdio.h>
void nprim(int );
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

      nprim(n);
    return 0;
}
 void nprim(int x)
{
    int a,n,count;
    for(a=1,count=0;count<=x;a++)
    {
        for(n=a/2;n>0;n--)
      {

        if(n==1) { printf("  %d  ",a); count++; break; }
        else if(a%n==0) break;
      }

    }
}



