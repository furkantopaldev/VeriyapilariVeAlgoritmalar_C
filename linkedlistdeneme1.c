#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}node;


void linkedlistyazdir(struct Node *n)
{
	node *iter=n;
	while(iter!=NULL)
	{
		printf("%d ", iter->data);
		iter=iter->next;
	}
	printf("\n-------------------------------\n");
}
// burasý verdigim degeri yazdýrmak için gösterdigim void fomksiyonu aþkým mesela bir deger girdim bi listeye datasýna 5 dedim. bunu buradaki printf gösteriyor ondan yazdým.

struct Node *listeyarat(int data)
{
	node *n=(node*)malloc(sizeof(node));
	n->data=data;
	n->next=NULL;
}
//aþkým okuldaki gibi bi liste alaný yaratma yapmadým onun yerine böyle biþey yaptým ama okuldaki gibide yapabiliriz onda da kaç tane liste alacagýný falan scanflerdin öylece
//bunun for döngüsünde alanýný ayarlardýn sen de yazmýþtýn hatta bunla ilgili kod.
void listeninbasinaekleme(struct Node **liste,int data)
{
	node *yeniliste=listeyarat(data);
	yeniliste->next= *liste;
	*liste=yeniliste;
}
//burasý aþkým listenin baþýna ekliyor normaldeki bizim int temp degeriyle int sayýsýndaki degeri degiþtirmek gibi bu iþlem onla özdeþleþtirebilirsin
//yeniliste diye bir liste yaratýyoruz listeyarat fonksiyonuna yollayarak mallocla yerimizi ayýrýyoruz sonra yenilistenin nextine pointer listenin degerini atýyoruz.
//sonra listenin degerine de yenilisteyi atýyoruz aþkým int temp gibi düþün ilkte elimizde bir listemiz var gibi düþün yeniliste oluþturduk ve yenilistenin nextine gittik 
//listenin degerini atadýk yani sonradan gelicek onun degeri öyle oldu çok anlatamadým ama olsun video izleyince net anlarsýn skgksfgkjsfghsdjf 

void listesilme(struct Node **liste,int data)
{
	node *temp;
	node *iter=*liste;
	if(*liste==NULL)
	{
		printf("bu liste bos");
		
	}
	else if((*liste)->data==data)
	{
		temp=(*liste)->next;
		free(*liste);
		*liste=temp;
	}
	else 
	{
		while(iter->data!=data && iter!=NULL)
		{
			iter=iter->next;
			
		}
		free(iter);
	}
}





//listenin baþýna eklemeyle ve yer ayýrmalarý anladým, aslýnda listenin sonuna eklemeyi  de anladým ama bu koddaki hatayý anlamadým.
void listeninsonunaekleme(struct Node **liste,int data)
{
	node *gecici=*liste;
	
	if(*liste==NULL)
	{
		*liste=listeyarat(data);
	}
	else
	{
	
		while(gecici->next!=NULL);
		{
		gecici=gecici->next;
		}
		gecici->next=listeyarat(data);
	}
}

int main() {
	node *n=(node*)malloc(sizeof(node));
	n->data=2;
	n->next=NULL;
	
	n->next=(node*)malloc(sizeof(node));
	n->next->data=3;
	n->next->next=NULL;
	
	/*printf("%d \n", n->data);
	printf("%d\n", n->next->data);
	printf("---------------------------------------------------------\n");
	
	printf("%p \n", &n);
	printf("%p \n",n);
	printf("%p \n", (&n->data));
	printf("%p \n",(&n->next));*/
//burasý sadece pointer açýp data degeri verip denediigim yer aþkým ondan dolayý kapadým. Alttaki printfler adresi veriyor onu kanýtlamak için.

	node *root=listeyarat(3);
	linkedlistyazdir(root);
	
	
	listeninbasinaekleme(&root,4);
	listeninbasinaekleme(&root,5);
	linkedlistyazdir(root);
	listesilme(root,4);
	linkedlistyazdir(root);
	printf("\n-------------------------------------\n");

	
	
	return 0;
}
