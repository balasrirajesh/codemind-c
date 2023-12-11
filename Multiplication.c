#include<stdio.h>
int mul()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a*b;
}
int main()
{
    int c=mul();
    printf("%d",c);
}