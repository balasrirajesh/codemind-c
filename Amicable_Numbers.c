#include<stdio.h>
int main()
{
    int a,b,c,d,e=0;
    scanf("%d%d",&a,&b);
    for(c=1;c<a;c++)
    {
        d=a%c;
        if(d==0)
        {
            e=e+c;
        }
    }
    if(e==b)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}