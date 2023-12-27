#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int count=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            count++;
        }
    }
    printf("%d",count);
}