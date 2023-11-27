#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f",&a,&b);
    for(c=a;c<=b;c++)
    {
        d=d+(sqrt(c));
    }
    printf("%.2f",d);
}