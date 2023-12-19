#include<stdio.h>
int main()
{
    int n,flag=1;
    scanf("%d",&n);
    int a[n],i;
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<=n;i++)
        if(b==a[i])
        {
            flag=0;
            break;
        }
    
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}