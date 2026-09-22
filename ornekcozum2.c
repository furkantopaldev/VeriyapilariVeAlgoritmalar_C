#include <stdio.h>
#include <stdlib.h>



void degerdegistir(int *a,int *b)
{
	int gecici =*a;
	*a=*b;
	*b=gecici;
	
}

int main() {
	
	int x=5;
	int y=10;
	
	degerdegistir(&x,&y);
	printf("%d %d",x,y);
	
	
	
	
	
	return 0;
}
