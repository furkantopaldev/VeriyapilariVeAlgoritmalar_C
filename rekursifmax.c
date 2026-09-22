#include <stdio.h>
#include <stdlib.h>
int minAlma (int x, int y);
int maxAlma (int x,int y);
int main() {
	int sayi1;
	int maxsonuc;
	int sayi2;
	int minsonuc;
	printf("sayi1 degeri giriniz:");
	scanf("%d", &sayi1);
	printf("sayi2 degeri giriinz:");
	scanf("%d", &sayi2);
	maxsonuc=maxAlma(sayi1,sayi2);
	minsonuc=minAlma(sayi1,sayi2);
	printf("aldiginiz degerlerin max degerli olani=%d\n", maxsonuc);	
	printf("aldiginiz degerlerin min degerli olani=%d", minsonuc);	

	return 0;
	
}

int maxAlma (int x, int y){
	if(x>y)
	{
		return x;
	}
	else 
	{
		return y;
	}
}

int minAlma (int x, int y){
	if (x>y)
	{
		return y;
		
	}
	else 
	{
		return x;
	}
}
