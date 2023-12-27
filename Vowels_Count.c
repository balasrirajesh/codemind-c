#include<stdio.h>
int main()
{
	char s1[20];
	scanf("%[^
]s",s1);
	int i,len=0;
	for(i=0;s1[i]!=NULL;i++)
	{
	    if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
	    {
		len=len+1;
    	}
	}
	printf("%d",len);
}