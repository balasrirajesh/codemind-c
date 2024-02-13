#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    if(n!=0)
    {
        s=((n-1)*((n-1)+1))/2;
        printf("%d",s);
    }
}