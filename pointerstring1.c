#include <stdio.h>
#include <stdlib.h>

int uzunlukgosterme(char *p){
	
	int uzunluk=0;
	int i;
	for(i=0;p[i]!='\0';i++){
		uzunluk++;
	}
	return uzunluk;
}



int main() {
	
	char yazi[1000];
	printf ("bir char degeri giriniz=");
	scanf("%s",&yazi);
	printf("%s\n", yazi);
	int b=uzunlukgosterme(yazi);
	printf ("girdiginiz degerin uzunlugu=%d", b);
	
	return 0;
}
