#include <stdio.h>
#include <stdlib.h>


int main() 
{
int a=7,b=6,carpim;
carpim=carpimre(a,b);
printf("yediyle altinin carpimi=%d",carpim);




return 0;
}
carpimre(int x,int y){
	if(x==1){
		return y;
	}
	if(x>1)
	{
		return y+carpimre(x-1,y);
	}
}
