#include<stdio.h>
#include<ctype.h>
void main()
{
	FILE *fp1,*fp2;
	char sf[50],df[50],c;
	printf("Enter source file name");
	gets(sf);
	fp1=fopen(sf,"r");
	if(fp1=NULL)
	{
		printf("file does not exist");
	}
		else
	{
		fp2=fopen(df,"w");
		while((c=fgetc(fp1))!=EOF)
		{
			if(islower(c))
			c=toupper(c);
		}	fputc(c,fp2);
	}
}
