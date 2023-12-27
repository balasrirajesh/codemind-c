#include<stdio.h>
int main()
{
    char str[20];
    scanf("%[^
]s",&str);
    int i,b=0;
    for(i=0;str[i]!=NULL;i++)
    {
        b+=1;
    }
    printf("%d",b);
    
}