#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,e;
    scanf("%d",&a);
    printf("%d %d ",b,c);
    e=a;
    while(e>2)
    {
        d=b+c;
        b=c;
        c=d;
        printf("%d ",d);
        e--;
        
    }
}