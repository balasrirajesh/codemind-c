#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            a=a+arr[i];
        }
    }
    printf("%d",a);
}