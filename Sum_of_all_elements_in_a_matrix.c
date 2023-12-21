#include<stdio.h>
int main()
{
    int r,c,b=0,d=0;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           b+=a[i][j];
        }
    }
    printf("%d",b);
}