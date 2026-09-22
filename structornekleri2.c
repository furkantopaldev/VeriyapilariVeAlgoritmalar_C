#include <stdio.h>
#include <stdlib.h>

struct yap
{
	char isim[40];
	char yer[40];
	int yas;
}sira[3];




int main() {
	int i;
	for(i=0;i<3;i++)
	{
		printf("hastanin yasi:");
		scanf("%d",&sira[i].yas);
		printf("\n hastanin ismi:");
		scanf("%s",&sira[i].isim);
		printf("hastanin geldigi yer:");
		scanf("%s",&sira[i].yer);
		
	}
	for(i=0;i<3;i++)
	{
		printf("%s  %d  %s\n",sira[i].isim,sira[i].yas,sira[i].yer);
	}
	
	
	
	
	return 0;
}
