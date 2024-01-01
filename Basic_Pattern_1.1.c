#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    if(a>2 && a<101)
    {
        for(i=1;i<=a;i++)
        {
            if(i<=a)
            {
                for(j=1;j<=a;j++)
                {
                    printf("* ");
                }
                printf("
");
            }
        }
    }
}