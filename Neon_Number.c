#include<stdio.h>
int main()
{
    int a,b,c,s=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        c=b%10;
        s=s+c;
        b=b/10;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
}