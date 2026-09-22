#include <stdio.h>
#include <stdlib.h>


int main() {
	struct yap
	{
		char cdizi1[40];
		char cdizi2[40];
		char cdizi3[40];
		char cdizi4[40];
		int id;
	}yd;
	yd.id=20;
	
	printf("adinizi giriniz.");
	fgets(yd.cdizi1,10,stdin);
	printf("%s",yd.cdizi1);
	printf("%c", yd.cdizi1[2]);
	//þöyle bir kodda tek harfi göstermek için %s yi kullanamýyoruz ama %c yi kullanabiliyoruz neden anlamadým.
	return 0;
}
