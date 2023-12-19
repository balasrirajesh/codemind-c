#include<stdio.h>
int main(){
    int n,b=0;
    scanf("%d",&n);
    int a[n],i,flag=1;
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        b+=a[i];
    }
    for(i=0;i<n;i++)
    {
    if(b/n==a[i])
    {
        flag=0;
    }
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