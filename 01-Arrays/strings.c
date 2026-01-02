#include <stdio.h>
#include <string.h> // !!!

int main() {

    char kitapAdi[20] = "C Dili";
    
    char yeniKitap[20];

    strcpy(yeniKitap, "Algoritmalar");
    
    printf("Kitap: %s, Uzunluk: %lu karakter\n", yeniKitap, strlen(yeniKitap));
    
    if (strcmp(kitapAdi, "C Dili") == 0) {
        printf("Aradiginiz kitap stokta var!\n");
    }
    
    return 0;
}
