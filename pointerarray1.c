#include <stdio.h>
#include <stdlib.h>


int max(int a[],int uzunluk)
{
	int i;
	int enbuyuk=a[0];
	for(i=1;i<uzunluk;i++)
	{
		if (a[i]>enbuyuk)
		{
			enbuyuk=a[i];
		}
	}
	return enbuyuk;
}

int main() {
	int sayilar[5]={4,6,2,8,15};
	int *p;
	p=&sayilar;
	int kiyaslama=max(sayilar,5);
	printf("yazdiginiz dizideki en buyuk deger=%d",kiyaslama);
	
	
	return 0;
}
