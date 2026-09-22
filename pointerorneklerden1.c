#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int *dizi;
	int i;
	int elemansayisi;	
	printf("eleman sayisi giriniz.");
	scanf("%d", &elemansayisi);
	dizi=(int *)malloc(elemansayisi*sizeof(int));
	
	
	for(i=0;i<elemansayisi;i++)
	{
		printf("adres=%d\n deger=%d \n ",&dizi[i],dizi[i]);
		
	}
	free(dizi);
	while(getchar()!='\n')
	{
		getchar();
	}
	
	
	return 0;
}
