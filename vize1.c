#include <stdio.h>
#include <stdlib.h>


int main() {
	int numara[10]={2,1,1,0,2,0,5,0,1,7};
	int toplama;
	toplama=ogrencinumaratoplama(numara);
	
	return 0;
}


int ogrencinumaratoplama(int y[])
{
	 int toplam=0;
	int uzunluk=0;
	int i;
	for(i=0;y[i]!='\0';i++)
	{
		uzunluk++;
	}
	for(i=0;i<uzunluk;i++)
	{
		toplam=toplam+y[i];
	}
	
	
	return toplam;
}
