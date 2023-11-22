#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=b*c;
    f=a-b;
    h=f*c;
    g=f*d;
    if(f==0)
    {
        printf("%d",e);
    }
    else if(c>d)
    {
        printf("%d",e+g);
    }
    else
    {
        printf("%d",e+h);
    }
}