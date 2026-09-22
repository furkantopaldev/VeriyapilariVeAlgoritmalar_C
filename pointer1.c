#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i=5;
	int*p=&i;
	
	
	printf("%p\n", *p);
	printf("%u\n", *p);
	
	
	printf("%p\n", p);
	printf("%u\n", p);
	
	
	printf("%d", *p);
	
//& adres bilgisini verir.
//* adresteki degeri verir.
// %u pointerin adres bilgisini bastırır.
//%p hegzemal bilgisini bastırır.

	return 0;
}
