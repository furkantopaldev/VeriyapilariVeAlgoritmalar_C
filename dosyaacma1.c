#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main() {
	 FILE *fp;
  int id;

  if ((fp = fopen ("dosya.txt", "w")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) fputc ('b', fp);
  fclose(fp);

  if ((fp = fopen ("dosya.txt", "a")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) fputc ('c', fp);
  fclose(fp);

  if ((fp = fopen ("dosya.txt", "r")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<20; id++) printf("%c", fgetc(fp));
  fclose(fp);
	
	
	
	return 0;
}
