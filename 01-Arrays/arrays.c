#include <stdio.h>

#define RAF_KAPASITESI 5

int main() {

    int kitapRaf[RAF_KAPASITESI] = {101, 102, 103, 104, 105};

    // printf("3. siradaki kitap ID: %d\n", kitapRaf[2]);

    // for (int i = 0; i < RAF_KAPASITESI; i++) {
    //     printf("Raf[%d] Adresi: %p | Deger: %d\n", i, &kitapRaf[i], kitapRaf[i]);
    // }

    int kapasite = sizeof(kitapRaf) / sizeof(kitapRaf[0]); 
    printf("Bu rafta %d kitap var.\n", kapasite);

    int kutuphaneDolabi[3][5] = {
        {101, 102, 103, 104, 105},
        {201, 202, 203, 204, 205},
        {301, 302, 303, 304, 305}
    };
    printf("Secilen Kitap: %d\n", kutuphaneDolabi[1][2]);

    return 0;
}
