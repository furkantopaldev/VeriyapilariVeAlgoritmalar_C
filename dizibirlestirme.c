#include <stdio.h>
#include <stdlib.h>


int birlestirme(int a[],int boyut1,int b[],int boyut2)
{
	int *sonuc;
	sonuc=(int *)calloc(boyut1+boyut2,sizeof(int));
	int j,k;
	for(j=0;j<boyut1;j++)
	{
		sonuc[j]=a[j];
	}
	for(k=0;k<boyut2;j++,k++)
	{
		sonuc[j]=b[k];
		
	}
	return sonuc;
}

int main() {
	int liste1[3]={1,2,3};
	int liste2[4]={4,5,6,7};
	int *ptr;
	int i;
	ptr=birlestirme(liste1,3,liste2,4);
	for(i=0;i<7;i++)
	{
		printf("yenidiji[%d]=%d\n",i,ptr[i]);
	}
	return 0;
}
