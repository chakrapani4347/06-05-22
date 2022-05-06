#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("abc.txt","r");
	fp2 = fopen("file.txt","w");
	if (fp1 == NULL || fp2 == NULL)
	{
		printf("File is not created\n");
		exit(1);
	}
	else
	{
		char ch;
		while ((ch = fgetc(fp1)) != EOF)
		{
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

