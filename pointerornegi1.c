#include <stdio.h>
#include <stdlib.h>
int yerdegistir(int *p,int *z);
int main() {
	int b=6;
	int a=3;
	printf("a=%d  b=%d", a,b);
	yerdegistir(a,b);
	printf("\n");
	printf("a=%d b=%d", a,b);
	
	
	return 0;
}



int yerdegistir(int *p,int *z)
{
	int *gecici;
	gecici=p;
	p=z;
	z=gecici;
	return p,z;
}


