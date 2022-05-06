#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("abc.txt","r");
	if (fp == NULL)
	{
		printf("File is not created\n");
		exit(1);
	}
	else
	{
		char vb;
		vb = fgetc(fp);
		printf("Read character is %c\n",vb);
		fclose(fp);
	}
	return 0;
}
