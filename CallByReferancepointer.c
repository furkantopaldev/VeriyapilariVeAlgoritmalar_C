#include <stdio.h>
#include <stdlib.h>

void degerdegistir(int *a,int *b);

int main() {

int x=5,y=10;
degerdegistir(&x,&y);

  printf("x=%d, y=%d", x,y);

	return 0;
}

void degerdegistir(int *a,int *b)
{
	int gecici=*a;
	*a=*b;
	*b=gecici;
	
	
	
}

// bu seferkinde call by referance yani pointer yardımıyla çagıdık. böyle olunca yani pointerla yapınca bunu içindeki degerlere gidip direkt içindeki degeri degistiriyor yani
// x in oldugu yer 123 yeri olsun o 123 yerindeki kısımda 5 harfini tutuyor ama pointerla adresleri degistirdigimiz için 123 yeri artık 10 tutmuş hale geliyor.
