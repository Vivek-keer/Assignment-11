#include <stdio.h>
#include <stdlib.h>
int fact(int x);
int comb(int,int);
void pascaltriangle(int);
int main()
{
    int p;
    printf("Enter the number: ");
    scanf("%d",&p);
   pascaltriangle(p);
    return 0;
}
int fact(int x)
{
    if(x==1||x==0) return 1;
    return fact(x-1)*x;
}
int comb(int a,int b)
{
    int comb;
    comb=fact(a)/(fact(b)*fact(a-b));
    return comb;
}
void pascaltriangle(int n)
 {

    int x,y,x1;

    for(y=0;y<=n;y++)
    {
        for(x=0,x1=0;x<=2*n;x++)
        {
            if((x>=n-y)&&(x<=n+y))
            {
              switch(n%2==0)
               {
                   case 1:
                          switch(y%2==0)
                          {
                           case 1:
                                  if(x%2==0) {  printf("%d",comb(y,x1));x1++; } else printf(" "); break;
                           case 0:
                                  if(x%2)    {  printf("%d",comb(y,x1));x1++; } else printf(" "); break;
                          }       break;
                   case 0:
                          switch(y%2==0)
                          {
                           case 0:
                                  if(x%2==0) {  printf("%d",comb(y,x1));x1++; } else printf(" "); break;
                           case 1:
                                  if(x%2)    {  printf("%d",comb(y,x1));x1++; } else printf(" "); break;
                          }       break;
                }

            }
                           else printf(" ");
        }
                           printf("\n");
    }



}

