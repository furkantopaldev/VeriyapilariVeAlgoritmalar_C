#include <stdio.h>
#include <stdlib.h>

typedef struct deneme1{
	int no;
	char isim[30];
	struct deneme1 *next;
}deneme;

 struct deneme *createlist()
{
	deneme *head;
	deneme *p;
	int i,j;
	printf("bir sayi girin");
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		if(j==0)
		{
			head=(deneme*)malloc(sizeof(deneme));
			p=head;
		}
		else
		{
			p->next=(deneme*)malloc(sizeof(deneme));
			p=p->next;
		}
		printf("%d inci ogrencinin ismi=",j+1);
		scanf("%d", &p->isim);
		printf("%d inci ogrencinin no su=",i+1);
		scanf("%d", &p->no);
	}
	
}



int main(deneme *p) {
	int sayi=1;
	deneme *a;
	a=p;
	while(a!=NULL)
	{
		printf("%s %d",p->no,p->isim );
	}
	
	
	return 0;
}
