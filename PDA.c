#include<stdio.h>
int main()
{
    int a,b=0,c,d;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            b+=i;
        }
    }    
            if(b==a)
            {
                printf("PERFECT");
            }
            else if(b>a)
            {
                printf("ABUNDANT");
            }
            else if(b<a)
            {
                printf("DEFICIENT");
            }
}