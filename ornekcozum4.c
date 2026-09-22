#include <stdio.h>
#include <stdlib.h>


int main() {
	int *dizi;
	int n;
	printf("deger giriniz=");
	scanf("%d",&n);
	
	dizi=calloc(n,sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("dizinin %d. elemanini giriniz=", i);
		scanf("%d ",&dizi[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("girdiginiz %d. elemaninin degeri=%d", i,dizi[i]);
	}
	
	
	
	
	return 0;
}
