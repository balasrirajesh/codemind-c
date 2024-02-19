#include<stdio.h>
int main()
{
 int a,b,c=0,d=1,e;
 scanf("%d",&a);
 while(a!=0)
 {
     b=a%10;
     c+=b;
     d*=b;
     a=a/10;
 }
  e=d-c;
  printf("%d",e);
}