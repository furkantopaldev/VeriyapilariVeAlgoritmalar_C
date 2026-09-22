#include <stdio.h>
#include <stdlib.h>



void yerdegistir(int *p,int *z)
{
	int gecici;
	gecici=*p;
	p=z;
	z=gecici;
	printf("a=%d b=%d",*p,*z);

}

int main() {
	int a=66;
	int b=33;
	printf("a=%d b=%d",a,b);
	
	yerdegistir(a,b);
	printf("a=%d b=%d",a,b);
	
	
	return 0;
}
