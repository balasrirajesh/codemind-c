#include<stdio.h>
int main()
{
    int n,r,i,h=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        h=h*10+r;
        n=n/10;
    }
     if(n == h)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}