#include <stdio.h>
#include <stdlib.h>

void swap (int *p,int *k);

int main() {
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	swap(a,b);
	printf("%d",a);
	return 0;
}
void swap(int *p,int*k)
{
	int temp;
	k=&temp;
	temp=*p;
	p=k;
		printf("%d",k);
	
}
