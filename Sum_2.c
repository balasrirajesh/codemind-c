#include<stdio.h>
int main()
{
    int a,b,x,y,c,d=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(c=a;c<=b;c++)
    {
        if(c%x==0 && c%y!=0)
    {
        d=d+c;
    }
    }
     printf("%d",d);
}