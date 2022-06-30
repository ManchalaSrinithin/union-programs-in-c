#include<stdio.h>
main()
{
	char c;
	FILE *f1;
	f1=fopen("D:/c programs/files/biodata.txt","w");
	printf("\nEnter the data:");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f1=fopen("D:/c programs/files/biodata.txt","r");
	while((c=getc(f1))!=EOF)
	{
		putchar(c);
	}
	fclose(f1);
	
}