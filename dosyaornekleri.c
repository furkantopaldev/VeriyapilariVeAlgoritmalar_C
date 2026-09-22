#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *filep;
	int i;
	if((filep=fopen("dosya.txt","w"))==NULL)
	{
		printf("dosya olusturulamadi");
		exit(1);
	}
	else
	{
		for(i=0;i<10;i++)
		{
			fputc('a',filep);
			
		}
		fclose(filep);
	}
	if ((filep=fopen("dosya.txt","r"))==NULL)
	{
		printf("dosya acilmadi");
		exit(1);
	}
	for(i=0;i<10;i++)
	{
		printf("%c",fgetc(filep));
		
	}
	fclose(filep);
	return 0;
}
