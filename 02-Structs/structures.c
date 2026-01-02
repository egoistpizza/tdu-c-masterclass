#include <stdio.h>
#include <string.h>

struct Kitap {
    int id;
    char ad[50];
    char yazar[30];
    float fiyat;
}; 

int main() {

    struct Kitap favoriKitabim;

    favoriKitabim.id = 101;
    strcpy(favoriKitabim.ad, "C Programming - A Modern Approach"); 
    strcpy(favoriKitabim.yazar, "K. N. King");
    favoriKitabim.fiyat = 3758.25;

    printf("Favori: %s (%d) - %.2f TL\n", favoriKitabim.ad, favoriKitabim.id, favoriKitabim.fiyat);

    struct Kitap raf[2];

    raf[0].id = 201;
    strcpy(raf[0].ad, "C Programming Language");
    strcpy(raf[0].yazar, "K/R");
    
    raf[1].id = 202;
    strcpy(raf[1].ad, "Effective C");
    strcpy(raf[1].yazar, "Robert C. Seacord");

    for(int i = 0; i < 2; i++) {
        printf("Raf[%d]: %s - Yazar: %s\n", i, raf[i].ad, raf[i].yazar);
    }

    return 0;
}
