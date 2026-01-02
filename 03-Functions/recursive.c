#include <stdio.h>
#include <string.h>

struct Kitap {
    int id;
    char ad[50];
};

int kitapAraRecursive(struct Kitap raf[], int boyut, int arananId, int index) {
    
    if (index >= boyut) {
        return -1;
    }

    if (raf[index].id == arananId) {
        return index;
    }

    return kitapAraRecursive(raf, boyut, arananId, index + 1);
}

long long faktoriyel(int n) {

    if (n <= 1) {
        return 1;
    }
    
    return n * faktoriyel(n - 1);
}

int main() {

    struct Kitap raf[3] = {
        {101, "C Programming - A Modern Approach"},
        {102, "C Programming Language"},
        {103, "Effective C"}
    };

    int aranan = 103;
    
    int sonuc = kitapAraRecursive(raf, 3, aranan, 0);

    if (sonuc != -1) {
        printf("Kitap bulundu! Raf Sirasi: %d, Kitap Adi: %s\n", sonuc, raf[sonuc].ad);
    } else {
        printf("Kitap kutuphanede yok.\n");
    }

    int kitapSayisi = 5;

    printf("%d kitap, rafa %lld farkli sekilde dizilebilir.\n", 
            kitapSayisi, faktoriyel(kitapSayisi));

    return 0;
}
