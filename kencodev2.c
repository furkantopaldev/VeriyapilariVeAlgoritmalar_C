#include <stdio.h>

#define MAX_EMPLOYEES 100
#define EMPTY -1  
#define FULL -2   


int Menu();
int Ekle(int dizi[], int id);
int Bul(int dizi[], int id);
void Listele(int dizi[]);

int main() {
    int dizi[MAX_EMPLOYEES];
    int secim, id, sonuc;
    int i;

    for (i = 0; i < MAX_EMPLOYEES; i++) {
        dizi[i] = EMPTY;
    }

    while (1) {
        secim = Menu();
        switch (secim) {
            case 1:
                printf("Eklenecek ID: ");
                scanf("%d", &id);
                sonuc = Ekle(dizi, id);
                if (sonuc == FULL)
                    printf("Dizi dolu. ID eklenemedi.\n");
                else
                    printf("ID eklendi. Index: %d\n", sonuc);
                break;

            case 2:
                printf("Aranacak ID: ");
                scanf("%d", &id);
                sonuc = Bul(dizi, id);
                if (sonuc == FULL)
                    printf("ID bulunamadý.\n");
                else
                    printf("ID bulundu. Index: %d\n", sonuc);
                break;

            case 3:
                Listele(dizi);
                break;

            case 4:
                printf("Programdan cikiliyor.\n");
                return 0;

            default:
                printf("Gecersiz secim. 1-4 arasý giriniz.\n");
        }
    }

    return 0;
}

// Menü göster ve seçim al
int Menu() {
    int secim;
    printf("\n----- MENÜ -----\n");
    printf("1 -> ID ekle\n");
    printf("2 -> ID bul\n");
    printf("3 -> Tum ID'leri göster\n");
    printf("4 -> cikis\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);
    return secim;
}


int Ekle(int dizi[], int id) {
    int i, index = id % MAX_EMPLOYEES;

    for (i = 0; i < MAX_EMPLOYEES; i++) {
        int pos = (index + i) % MAX_EMPLOYEES;
        if (dizi[pos] == EMPTY) {
            dizi[pos] = id;
            return pos;
        }
    }
    return FULL;
}


int Bul(int dizi[], int id) {
    int i, index = id % MAX_EMPLOYEES;

    for (i = 0; i < MAX_EMPLOYEES; i++) {
        int pos = (index + i) % MAX_EMPLOYEES;
        if (dizi[pos] == id)
            return pos;
        if (dizi[pos] == EMPTY)
            return FULL;
    }
    return FULL;
}

void Listele(int dizi[]) {
    int i, bos = 1;
    printf("Kayitli ID'ler:\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        if (dizi[i] != EMPTY) {
            printf("dizi[%d] = %d\n", i, dizi[i]);
            bos = 0;
        }
    }
    if (bos)
        printf("Dizi boþ.\n");
}

