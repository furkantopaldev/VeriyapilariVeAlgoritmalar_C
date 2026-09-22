#include <stdio.h>
#include <stdlib.h>


int main() {
int dizi[]={1,2,3};
int dizi2[]={4,5,6};
int *p[2];
p[0]=dizi;
p[1]=dizi2;
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\n",p[i][j]);
	}
}

// diziler bir diziler pointerina atandýgýnda o dizinin içindeki degeri gösterebilmek için pointerin dizisinin dizisi alýnabilir bknz yukaridaki kod.  

	return 0;
}
