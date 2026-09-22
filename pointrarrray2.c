#include <stdio.h>
#include <stdlib.h>

int toplama(int x[],int uzunluk)
{
		int i;
		
		int toplam2=0;
		for (i=1;i<=uzunluk;i++)
		{
			toplam2=toplam2+x[i-1];
		}
		return toplam2;
}



int main() {
	
	int sayilar[5]={3,5,7,9,12};
	int *p;
	p=&sayilar;
	int b=toplama(sayilar,5);
	printf("girdiginiz dizideki degerlerin toplami=%d",b);	
	return 0;
}
