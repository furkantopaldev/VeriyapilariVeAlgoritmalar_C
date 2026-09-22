#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void bubblesort(int arr[],int uzunluk)
{
	int temp;
	int i,j;
		for (i=0;i<uzunluk;i++)
		{
			for(j=0;j<uzunluk-i;j++)
			{
				if (arr[j]<arr[j-i])
				{
					 temp=arr[j];
					arr[j]=arr[j-i];
					temp=arr[j-i];		
				}
			}
		}
}




int main() {
	
	int dizi[MAX],size;
	printf("kac tane dizi degeri gireceginizi belirtiniz=");
	scanf("%d", &size);
	int i;
	for(i=0;i<size;i++)
	{
		printf("dizi[%d]=",i);
		scanf("%d",&dizi);
	}
	bubblesort(dizi,size);
	for (i=0;i<size;i++)
	{
		printf("%d\n",dizi[i]);
	}
	
	return 0;
}
