#include<stdio.h>
int main()
{
    int i,j,r,c; 
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		int b=0;
		for(j=0;j<c;j++)
		{
			b+=a[i][j];
		}
		printf("%d ",b);
	}
}