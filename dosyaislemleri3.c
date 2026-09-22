#include <stdio.h>
#include <stdlib.h>


int main() {
/*FILE *fp;
char  buffer[7];
if(fp=fopen("dosya.txt","r"))
{
	fread(buffer,1,10,fp);
	buffer[7]=0;
	fclose(fp);
	printf("girdiginiz dosyadaki karakterlerin ilk 6 kelimesi=\n %s\n",buffer);
}*/

//fread(bilgi alacagý degerin degeri(int a ise messela a yazýcaksýn sadece),kaç kere yazdýracagý,ne kadar uzunlukta yazdýracagý,pointer dosyasi ismi).
//fread komutu aldýgý dosyadaki bilgileri okutmaya yarar. yukarýdaki koþullarla FILE *fp yazan yerde örnek mevcut.ve dosya.txt içinde "furkan" yazýlýdýr. 

//---------------------------------------------------------------------------------------------------------------------------------------------------------


FILE *fw;
char a[10]={'1','2','3','4','5','6','7','8','9','a'};
fw=fopen("ornekfurkan.txt","w");
fwrite(a,1,10,fw);
fclose(fw);

FILE *fr;
char kopyala[5];
if(fr=fopen("ornekfurkan.txt","r"))
{
	fread(kopyala,2,3,fr);
	kopyala[10]=0;
	fclose(fr);
}
printf("girdiginiz dosyadaki karakterler= %s \n ",kopyala);

//fwrite(bilgi alacagý degerin degeri(int a ise messela a yazýcaksýn sadece),kaç kere yazdýracagý,ne kadar uzunlukta yazdýracagý,pointer dosyasi ismi).
// fwrite komutu dosyaya write yani yazdýrma yapar bu komutla veri aldýgýn deger(int float vb) parametresini(içindeki veriyi) actýgý dosyanýn içine yazdýrmaya yarar.

//---------------------------------------------------------------------------------------------------------------------------------------------------------------


/*FILE *fs;
fs=fopen("ornekfurkan.txt","w");
fseek(fs,5,SEEK_SET);
fputs("furkan",fs);
fclose(fs);*/

//fseek(girecegi dosyanýn dosya pointerinin ismi,kaçýncý degerden sonra girecegi,SEEK turu).
//SEEK_SET=dosyanýn baþýndan deger alýr, SEEK_CUR=dosyadaki cursor'un oldugu yerden, SEEK_END=dosyanýn sonundan girer girer.
//fseek komutu dosya göstercisini isteyen noktaya taþýr bu üstte belirttigim komutlarla yerini belirletir.

	return 0;
}
