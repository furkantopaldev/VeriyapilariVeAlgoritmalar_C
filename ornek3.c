#include <stdio.h>
#include <stdlib.h>

int dizilerdetoplama(int [],int);
int main() {
	int n=6 , dizi[6]={1,2,3,4,5,6,7};
	int toplam=dizil0erdetoplama(dizi,n);
	return 0;
}
int dizilerdetoplama(int dizi[],int n){
	if(n==0)
	{
		return dizi[0];
	
	}
	return dizi[n]+dizilerdetoplama(dizi,n);

}
