#include <stdio.h>
#include <math.h>

long long moduler_us_alma(long long taban, long long us, long long mod) {
    
    long long usluSayi = pow(taban,us);
    long long sonuc = fmod(usluSayi,mod);

    return sonuc;
}

int main() {

    long long n = 23; 
    long long g = 5;
    
    printf("Ortak Degerler (Herkes biliyor) -> n: %lld, g: %lld\n\n", n, g);

    long long aliceGizli = 7;   // a
    long long bobGizli = 3;     // b

    printf("Alice'in Gizli Sayisi: %lld\n", aliceGizli);
    printf("Bob'un Gizli Sayisi  : %lld\n\n", bobGizli);

    long long aliceGonderdigi = moduler_us_alma(g, aliceGizli, n);
    long long bobGonderdigi = moduler_us_alma(g, bobGizli, n);

    printf("Alice -> Bob'a gonderiyor: %lld\n", aliceGonderdigi);
    printf("Bob -> Alice'e gonderiyor: %lld\n\n", bobGonderdigi);

    long long aliceAnahtar = moduler_us_alma(bobGonderdigi, aliceGizli, n);
    long long bobAnahtar = moduler_us_alma(aliceGonderdigi, bobGizli, n);

    printf("Alice'in Buldugu Anahtar: %lld\n", aliceAnahtar);
    printf("Bob'un Buldugu Anahtar  : %lld\n", bobAnahtar);

    return 0;
}