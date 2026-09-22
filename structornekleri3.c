#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct yap
{
	char dizi1[40];
	char dizi2[40];
	int yas;
}yd,*yp;


int main() {
	yp=&yd;
	
	strcpy(yd.dizi1,"furkan");
	strcpy(yp->dizi2,"topal");
	yp->yas=20;
	
	printf("%s %s %d",yd.dizi1,yp->dizi2,yp->yas);
	
	//pointer atamasýnda adresten alýp (&) iþareti ile alýyoruz verileri ve pointerda struct yapýsý içindeki billgiyi almak için nokta(.) degii
	//(->) bu iþareti kullanýyoruz.
	
	return 0;
}
