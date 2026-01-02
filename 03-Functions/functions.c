#include <stdio.h>
#include <string.h>

struct Kitap {
    int id;
    char ad[50];
    int sayfaSayisi;
};

void kitapBilgisiYazdir(struct Kitap k) {
    printf(">> Kitap: %s (ID: %d) - %d Sayfa\n", k.ad, k.id, k.sayfaSayisi);
}

double okumaSuresiHesapla(int sayfa, double sayfaBasiDakika);

int main() {

    struct Kitap k1;

    k1.id = 101;

    strcpy(k1.ad, "Effective C");

    k1.sayfaSayisi = 350;

    kitapBilgisiYazdir(k1);

    double dakika = okumaSuresiHesapla(k1.sayfaSayisi, 1.5);
    printf("Bu kitabi bitirmek yaklasik %.1f dakika surer.\n", dakika);

    return 0;
}

double okumaSuresiHesapla(int sayfa, double sayfaBasiDakika) {
    double sure = sayfa * sayfaBasiDakika;
    return sure;
}