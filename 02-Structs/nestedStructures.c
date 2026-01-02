#include <stdio.h>
#include <string.h>

struct Tarih {
    int gun;
    int ay;
    int yil;
};

struct Kitap {
    int id;
    char ad[50];
    struct Tarih basimTarihi;
};

int main() {

    struct Kitap raf[1];

    raf[0].basimTarihi.yil = 2023;

    return 0;
}
