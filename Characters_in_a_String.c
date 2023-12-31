#include<stdio.h>
int main()
{
	char s1[20];
	scanf("%[^
]s",s1);
	int i,len=0;
	for(i=0;s1[i]!=NULL;i++)
	{
		len=len+1;
	}
	printf("%d",len);
}