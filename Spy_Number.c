#include<stdio.h>
int main()
{
    int n,r,h=1,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        i=i+r;
        h=r*h;
        n=n/10;
    }
    if(i==h)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}