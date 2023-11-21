#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
           d=d+b;
        }
    }
    printf("%d",d);
}