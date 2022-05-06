#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch = 'c';
	fp = fopen("abc.txt","w");
	if (fp == NULL)
	{
		printf("File is not created\n");
	}
	else
	{
		fputc(ch,fp);
		fclose(fp);
	}
	return 0;
}
