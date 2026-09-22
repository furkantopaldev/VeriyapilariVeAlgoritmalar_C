#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *fp;
	char a[50]="emirhan ile umut gunbel-25 adlý uçaðý yapýyor";
	fp=fopen("DDOSYA.txt","w");
	fwrite(&a,1,50,fp);
	fclose(fp);
	
	
	
	char *p;
	FILE *fs;
	p=a;
	fs=fopen("DDOSYA.txt","r");
	fread(&p,1,9,fs);	
	fclose(fs);
	return 0;
}
