#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c;
	float x1,x,x2;
	float func1,discriminant;

printf("enter value a,b,c=\n");
scanf("%f %f %f", &a, &b, &c );
	discriminant=b*b-4*a*c;
	if(discriminant<0){
	printf("no real root\n");
}
	else if(discriminant==0)
	{
		printf("roots are equal\n");
		}	
		else
		{
			printf ("roots are not equal\n");
		}
		x1=(-b+sqrt(discriminant)/2*a);
		printf("value of x1=%f\n",x1);
		x2=(-b-sqrt(discriminant)/2*a);
		printf ("value of x2=%f\n",x2);
		x=x1*x2;
		printf("value of x=%f\n",x);
	
	func1=a*x*x+b*x+c;
	
	printf("func1=%f",func1);	
	
	
	return 0;
}
