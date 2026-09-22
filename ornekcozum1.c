#include <stdio.h>
#include <stdlib.h>


int main() {
		int sayilar[5]={1,2,3,4,5};
		int *p;
		p=&sayilar;
		printf("%d ",*p);
		printf("%d ",*p+1);
		printf("%d ",*p+2);
		printf("%d ",*p+3);
		printf("%d ",*p+4);		
	return 0;
	
}
