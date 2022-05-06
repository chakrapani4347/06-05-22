#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("abc.txt","a");
	if (fp == NULL)
	{
		printf("File is not there!\n");
		exit(1);
	}
	else
	{
		char ch;
		printf("Enter whatever you want append text\n");
		scanf("%c",&ch);
		fputc(ch,fp);
		fclose(fp);
	}
	return 0;
}

