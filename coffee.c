#include<stdio.h>
int main()
{
 int X,P;
 int i;
 int res=0;
 scanf("%d %d",&X,&P);
 if(X==0)
 {
  printf("0");
 }
 if(X>0 && P>0)
 {
  diff=((P*X)/100);
  res=res+(X-diff);
 }
 return 0;
}
