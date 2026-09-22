#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i[5];
	int *iptr;
	int j;
	for(j=0;j<5;j++)
	{
		printf("dizi[%d]=",j);
		scanf("%d",&i[j]);
		printf(	"\n");
	}
	iptr=i;
	for(j=0;j<5;j++)
	{
		printf("normal dizi degeri %d \n",i[j]);
		printf("pointer degeri %d\n",iptr[j]);
	}
	// pointera da böyle deger atamaasý yapabilirsiniz.
	
	
	return 0;
}
