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
            if(a[i][j]%2==0)
            {
                b+=a[i][j];
            }
            else
            {
                d+=a[i][j];
            }
        }
    }
    printf("%d %d",b,d);
}