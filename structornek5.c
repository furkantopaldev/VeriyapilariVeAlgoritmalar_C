#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int vize;
	int final;
	
}x[2];

int main() {
	int sonuc[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("ogrenci ismi=");
		scanf("%s",&x[i].isim);
		printf("ogrenci soyismi=");
		scanf("%s",&x[i].soyisim);
		printf("%s isimli ogrencinin vize=", x[i].isim);
		scanf("%d", &x[i].vize);
		printf("%s isimli ogrencininin finali=", x[i].isim);
		scanf("%d",&x[i].final);
		printf("\n");
		
	}
	for(i=0;i<2;i++)
	{	
	printf("%s %s %d %d \n",x[i].isim,x[i].soyisim,x[i].vize,x[i].final);
}

for(i=0;i<2;i++)
{
	sonuc[i]=0.4*x[i].vize+0.6*x[i].final;
	printf("%s isimli ogrencinin ort= %d\n",x[i].isim,sonuc[i]);
}
for(i=0;i<2;i++)
{
	if(sonuc[i]<60)
	{
		printf("%s isimli ogrenci kaldi.\n" ,x[i].isim);
	}
	else
	{
		printf("%s isimli ogrenci gecti.\n",x[i].isim);
	}
}

// ogrenci bilgileriyle geçme geçmeme notu belirleme dosya halinde yapma kodu da var.

	
	return 0;
}
