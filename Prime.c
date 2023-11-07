#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b!=0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}