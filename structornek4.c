#include <stdio.h>
#include <stdlib.h>

struct hastabilgi{
	int yas;
	char isim[20];
	char soyisim[20];
	char yer[20];
	
}dizi[3];

		
int main() {
	int i;
	
	for (i=0;i<3;i++)
	{
	 	printf("yasi giriniz=");
	 	scanf("%d",&dizi[i].yas);
	 	printf("isim giriniz=");
	 	scanf("%s",&dizi[i].isim);
	 	printf("soyisim=");
	 	scanf("%s",&dizi[i].soyisim);
	 	printf("memleketi=");
	 	scanf("%s",&dizi[i].yer);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d %s %s %s", dizi[i].yas,dizi[i].isim,dizi[i].soyisim,dizi[i].yer);
	}
	

	return 0;
}
