#include <stdio.h>
#include <stdlib.h>


int main() {
	int k=8;
	printf("%d\n", k);
	arttir(&k);
	printf("%d",k);
	return 0;
}
void arttir(int *y)
{
	printf("%d\n",y);
	y++;
	printf("%d\n",y);
}

