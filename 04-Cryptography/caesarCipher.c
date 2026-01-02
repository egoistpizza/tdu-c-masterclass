#include <stdio.h>
#include <string.h>

struct GizliKitap {
    int id;
    char ad[100];
};

void sezarSifrele(char metin[], int anahtar) {
    int uzunluk = strlen(metin);
    
    for(int i = 0; i < uzunluk; i++) {
        if(metin[i] >= 'A' && metin[i] <= 'z') {
            metin[i] = metin[i] + anahtar; 
        }
    }
    printf(">> Sifreleme Tamamlandi (Anahtar: %d)\n", anahtar);
}

void sezarCoz(char metin[], int anahtar) {
    int uzunluk = strlen(metin);
    for(int i = 0; i < uzunluk; i++) {
        if(metin[i] >= 'A' && metin[i] <= 'z') {
            metin[i] = metin[i] - anahtar;
        }
    }
    printf(">> Sifre Cozuldu.\n");
}

int main() {

    struct GizliKitap yasakliKitap;
    
    yasakliKitap.id = 999;
    strcpy(yasakliKitap.ad, "Calikusu");

    printf("Orijinal Kitap Adi: %s\n", yasakliKitap.ad);

    sezarSifrele(yasakliKitap.ad, 3);
    
    printf("Sifreli Hali: %s\n", yasakliKitap.ad);

    sezarCoz(yasakliKitap.ad, 3);
    
    printf("Cozulmus Hali: %s\n", yasakliKitap.ad);

    return 0;
}