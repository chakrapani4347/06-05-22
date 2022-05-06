#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int character,words,lines;
	fp = fopen("abc.txt","r");
	if (fp == NULL)
	{
		printf("File is not created\n");
		exit(1);
	}
	else
	{
		character=words=lines = 0;
		while((ch = fgetc(fp)) != EOF)
		{
			character++;
			if (ch == '\n' || ch == '\0')
			
				lines ++;
				if (ch == ' ' || ch == '\t' || ch == '\n' || ch =='\0')
				
					words ++;
				
			
		}
		if (character > 0)
		{
			words ++;
			lines++;
		}
		printf("The characters are : %d\n",character);
		printf("The words are : %d\n",words);
		printf("The lines are : %d\n",lines);
	}
	return 0;
}

