#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    c=c+(b*b);
    d=((a*(a+1))/2)*((a*(a+1))/2);
    printf("%d",d-c);
}