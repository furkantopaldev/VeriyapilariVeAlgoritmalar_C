#include <stdio.h>
#include <stdlib.h>
	struct {
	int length;
	int year;
	int weight;
}inf;


int main() {	
	printf("enter lenght info\n");
	scanf("%d",&inf.length);
	printf("enter weight info\n");
	scanf("%d",&inf.weight);
	printf("enter lenght info\n");
	scanf("%d",&inf.year);
	printf("%d %d %d", inf.length, inf.weight, inf.year);
	
	return 0;
}
