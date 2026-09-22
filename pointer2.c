#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a=6,*ap;
	float b=3.4,*bp;
	char c='l',*cp;
	double d=3.12345,*dp;
	
	int sayilar[5]= {1,2,3,4,5};
	int *arrayp;

	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrayp=&sayilar[1];
	
	
	printf("%u  uzerinde olan degerindeki int degerinin kendi degeri= %d\n", ap,*ap);
	printf("%u uzerindeki olan degeri floatin degerinin kendi degeri=%f\n", bp,*bp);
	printf("%u uzerindeki olan degeri charin degerinin kendi degeri=%c\n", cp,*cp);
	printf("%u uzerindeki olan degeri doublenin degerinin kendi degeri=%lf\n", dp,*dp);
	printf("%u uzerindeki olan degeri dizinin degerinin kendi degeri=%d\n", arrayp,*arrayp);

	return 0;
}
