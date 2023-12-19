#include<stdio.h>
int main(){
    int n;
    float c;
    scanf("%d",&n);
    int a[n],i,b=0;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b+=a[i];
    }
    c=b/float(n);
    printf("%.2f",c);
    
        
    
}