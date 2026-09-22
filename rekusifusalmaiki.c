#include <stdio.h>
#include <stdlib.h>

int usalma(int x, int y);


int main(void){
	int sonuc;
	int sayi;
	int us;
	printf("sayi degeri giriniz:");
	scanf("%d", &sayi);
	printf("us degeri giriniz");
	scanf("%d", &us);
	sonuc=usalma(sayi,us);
	printf("giridiginiz degerlerin sayisi=%d", sonuc);	
	
}
int usalma(int x, int y){
	
	int sayac;
	int i;
	if(y<0)
	{
		for (i=0;i>y;i++)
		{
			return sayac*1/x;
		}
	}

 
	if (y=0)
	{
		return 1;
		
	}
	 if (y>0)
	{
		for(i=0;i>y;i++)
		{
			return sayac*x;
		}
	}
	
	return sayac;
}
