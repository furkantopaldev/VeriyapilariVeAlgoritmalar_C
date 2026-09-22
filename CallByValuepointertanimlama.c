#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void yerdegistir(int a,int b);

int main() {
	
	int x=5,y=10;
	yerdegistir(x,y);
	
	printf("x=%d,y=%d", x,y);
	return 0;
}
void yerdegistir(int a,int b)
{
	int gecici=a;
	a=b;
	b=gecici;
	printf("a=%d,b=%d\n", a,b);
	
	// call by value deniir bunun ismine aslinda fonksiyonun içinde atanýlan þeyler degerlerini degistirse de fonksiyon bittikten sonra bu iþlemin hiçbir olayý kalmýyor yani x yine eski 
	// eski degerine y eski degerine dönuyor bundan dolayý gecici deger denilen call by value (deger caðýrma) oluyor bundan sonraki call by referance ise pointer sayesinde cagýralacgý
	// icin bundaki kalýcý bi degiþken olacak.
	
}
