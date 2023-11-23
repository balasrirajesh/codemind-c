#include<stdio.h>
int main()
{
    int a,b,c,lcm,hcf;
    scanf("%d%d",&a,&b);
    for(c=1;c<=b;c++)
    {
        lcm=a*c;
        if((lcm)%b==0)
        {
            hcf=(a*b)/lcm;
            printf("%d",hcf);
            break;
        }
    }
}