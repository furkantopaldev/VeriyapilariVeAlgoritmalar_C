#include <stdio.h>
#include <stdlib.h>



void insertionsort(int arr[],int size)
{
	int i,j;
	int minimumindex;
	for(i=0;i<size;i++)
	{
		minimumindex=i;
			for(j=i;j<size;j++)
			{
				if(arr[j]<arr[minimumindex])
				{
					minimumindex=j;
				}
			}
					int temp=arr[i];
			arr[i]=arr[minimumindex];
			arr[minimumindex]=temp;
	}
}

int main() {
	int i;
	int dizi[50];
	int size;
	printf("kac elemanli:");
	scanf("%d", &size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&dizi[i]);
	}
	insertionsort(dizi,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",dizi[i]);
	}
	
		
	return 0;
}
