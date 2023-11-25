#include<stdio.h>
int main()
{
    float a,b,c=0,d=1;
    scanf("%f",&a);
    for(b=1;b<=a;b++)
    {
       c=c+(1/b); 
       }
         printf("%.2f",c);
}