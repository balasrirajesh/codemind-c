#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    for(c<=a;c>=0;c--)
    {
        if(a%c==0 && b%c==0)
        {
           printf("%d",c);
           break;
        }
    }
    
}