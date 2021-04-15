#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int l,j,i,k,m;
scanf("%s",s);
l=strlen(s);
if(l%2==1)
{       m=l/2;
	for(i=l;i>0;i--)
	{
	for(j=0;j<i;j++)
	{
	printf(" ");
	}
	for(k=0;k<=l-i;k++)
	{
	if((k+m)<l)
	{
	printf("%c",s[k+m]);
	}
	else
	{
	printf("%c",s[k-m-1]);
	}
	}
	printf("\n");
	}
}
}
