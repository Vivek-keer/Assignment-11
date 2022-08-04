#include<stdio.h>
void nexprim(int x)
{
  int n;
  while(x>0)
{
   x++;
     for(n=x/2;n>0;n--)
  {
     if(n==1) {  printf("Next Prime number is %d",x); return; }
     else if(x%n==0) break;
  }
}
}
int main()
{
  int p;
  printf("Enter the number: ");
  scanf("%d",&p);
 nexprim(p);
}
