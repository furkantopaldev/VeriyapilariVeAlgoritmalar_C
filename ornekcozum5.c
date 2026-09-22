#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	
	int za;
	int *dizi;
	int n;
	printf("boyut degeri giriniz;");
	scanf("%d", &n);
	
	dizi=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("%d ",dizi[i]);
	}
	oylesine(za);
	return 0;
}



void oylesine(int a)
{


	int i;
	int *diziii;
	int n;
	printf("\n boyut degeri giriniz;");
	scanf("%d", &n);
	
	diziii=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("%d ", diziii[i]);
	}


}
