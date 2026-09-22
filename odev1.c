#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float a,b,c,d,e,f;
float X,Y;
printf ("enter to values of a,b,c,d,e,f\n");
scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f );
X=(c*e-b*f)/(a*e-b*d);
Y=(a*f-c*d)/(a*e-b*d);

printf("X=%f\n", X);
printf("Y=%f\n", Y);
	
	
	return 0;
}
