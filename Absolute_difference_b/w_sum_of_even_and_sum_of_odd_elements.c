#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,flag=1;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=0,c=0,d,e;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b+=a[i];
        }
        else
        {
            c+=a[i];
        }
    }
    d=c-b;
    e=b-c;
    if(c>b)
    {
        printf("%d",d);
    }
    else
    {
    printf("%d",e);
    }
    
}