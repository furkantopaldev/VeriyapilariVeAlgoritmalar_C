#include <stdio.h>
#include <stdlib.h>


int fun1(int x, int y)
{
	if (x==0){
		return y;
	}
	else {
		return fun1(x-1,y-1);
	}
	printf("\n");
}
void fun2(int g){
	int i;
	if (g>1)
	{
		 fun2(g-1);
		printf("\n");
		
	}
	for(i=0;i<g;i++)
	{
		printf("*");
	}
}

int main() {
	
	int a=6,b=2,c;
	
	c=fun1(a,b);
	printf("fonksiyondaki deger=%d\n",c);
fun2(6);
	return 0;
}
