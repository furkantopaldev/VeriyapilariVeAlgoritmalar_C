#include <stdio.h>
#include <stdlib.h>


int main() {
	/*FILE *fp;
	int r=5;
	float x=2.45;
	char s='s';
	fp=fopen("deneme.txt","w");
	fprintf(fp,"%d %f %c", r,x,s);*/
	
	//fopen komutu ilk acýcagýn dosya yazýlýr sonra yanýnna ne iþlemi olacak diye yazýlýr w=yazdýrma iþlemidir öyle bir dosya varsa siler ve üzerine yazar.
	//r=okuma iþlemidir öyle bi dosya olmak zorundadýr okumasý için, a=ekleme iþlemidir dosyada yazýlanýn sonrasýna yazdýrýr dosya yoksa yaratýr varsa sonundan ekler.
	
	FILE *printleyen;
	int b=5,f;
	float a=12.78,z;
	printleyen=fopen("yazdirma.txt","w");
	fprintf(printleyen,"%f %d ",a,b);
	fclose(printleyen);
	printleyen=fopen("yazdirma.txt","r");
	fscanf(printleyen,"%f %d",&z,&f);
	printf("%d %f \n",b,a);
	printf("%d %f", f,z);
	
	//fprintf(dosya pointeri, yazdýracaklarýmýzýn göstermesi, tutulan (int,float vs) degerinin ismi olarak bellidir) yukarýda örneði vardýr. dosyaya yazdýrmaya yarar.w ve a da kullanýlýr.
	//fscanf(dosya pointeri, yazdýracaklarýmýzýn göstermesi, tutulan (int,float vs) degerinin ismi olarak bellidir) yukarýda örnegi vardýr. dosyayý tarar.r de kullanýlýr.
	

	/*FILE *fp;
	char a[6]="furkan";
	fp=fopen("dosya.txt","w");
	int i;
	for(i=0;i<6;i++)
	{
		fprintf(fp,"%c",a[i]);
	} 
	fclose(fp);
	
	char ch;
	FILE *sp;
	sp=fopen("dosya.txt","r");
	while(!feof(sp))
	{
		ch=getch(a);
		printf("\n %c",ch);
	}
	getch();


// bu iþlemlerle dosya acýp dosyaya veri giriyoruz (w komutuyla) istedigimiz iþaretle (int float vb) sonrasýnda actýgýmýz dosyadan (r komutuyla) içerdigi bilgileri alýyoruz.
//eof(end of file)dosyanýn sonunu temsil eden komuttur while döngusunde parantez içindeki parametre  sp gösterdigi dosya pointerinin dosyasýnýn sonuna gelene kadar diye tanýmlanýr.
//getch char degerini almaya yarýyor mesela putch da char degerinde koymaya yarýyor. fputch fgetch yazarsakta file içinde ayný komutlarý yapmamýzý saglar.
// burasý için bu kadar örnek yeter devamýndaki örnekler dosyaislemleri3.c dosaysýndan bulabilirsiniz.  
	*/
	return 0;
}
