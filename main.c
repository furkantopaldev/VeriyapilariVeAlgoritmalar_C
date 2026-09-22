#include <stdio.h>
#include <stdlib.h>

struct musteri {
    int hesapNo;
    char soyad[25];
    char ad[20];
    double bakiye;
};

int main(void) {
    struct musteri hesapBilgi = {0, "", "", 0.0};
    FILE *myPtr;

    if ((myPtr = fopen("musteri.txt", "r+")) == NULL) {
        printf("Dosya acilamadi\n");
    } else {
        printf("Hesap no gir (1-100 arasi deger)\n"
               "Veri girisini bitirmek icin 0 gir\n?\n");
        scanf("%d", &hesapBilgi.hesapNo);

        while (hesapBilgi.hesapNo != 0) {
            printf("Soyad Ad ve Bakiye gir\n?");
            fscanf(stdin, "%s%s%lf", hesapBilgi.soyad,
                   hesapBilgi.ad, &hesapBilgi.bakiye);

            fseek(myPtr, (hesapBilgi.hesapNo - 1) *
                         sizeof(struct musteri), SEEK_SET);
            fwrite(&hesapBilgi, sizeof(struct musteri), 1, myPtr);

            printf("Hesap no gir\n?");
            scanf("%d", &hesapBilgi.hesapNo);
        }
        fclose(myPtr);
    }
    return 0;
}
