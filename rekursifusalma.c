#include <stdio.h>
#include <stdlib.h>

int usalma(int x,int y);
int main(void)
{
	int sonuc;
	int sayi;
	int us;
	printf ("sayi degeri giriniz:");
	scanf("%d", &sayi);
	printf("\n");
	printf("us degeri giriniz:");
	scanf("%d", &us);
	
	sonuc=usalma(sayi,us);
	printf("girdiginiz deger=%d", sonuc);
	
}

int usalma(int x, int y)
{
	if (y==0)
	{
		return 1;
	}
	else
	{
		return x*usalma(x,y-1);
	}
	
}
