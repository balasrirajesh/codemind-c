#include<stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    for(c=1;c<=12;c++)
    {
        printf("%d x %d = %d
",a,c,a*c);
    }
}