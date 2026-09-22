#include <stdio.h>
#include <stdlib.h>


int main() {
	int numara[10]="2,1,1,0,2,0,5,0,1,7";
	int za;
	oylesine(za);
	ogrencinum(numara);
	

	return 0;
}


int oylesine(int b)
{
	int uzunluk=0;
	int i;
	int *yer;
	char x[10];
	printf("bir dizi giriniz:");
	scanf("%s",x);
	for(i=0;x[i]!='\0';i++)
	{
		uzunluk++;
	}
	yer=calloc(uzunluk,sizeof(char));
	printf("%s",x);
	printf("%d",uzunluk)
	
	
	return 0;
}
void ogrencinum(int y[])
{
	y
	
}
