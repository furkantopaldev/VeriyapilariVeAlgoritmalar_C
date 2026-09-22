#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=1;j<size-i;j++)
		{
			if (arr[j-1]>arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}

int main(){
	int i;
	int dizi[50],size;
	printf("kac elemanli");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&dizi[i]);
	}
	bubblesort(dizi,size);
	
	for(i=0;i<size;i++)
	{
		printf("%d ",dizi[i]);
	}

	return 0;
}
