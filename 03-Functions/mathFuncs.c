#include <stdio.h>
#include <math.h>

int main() {

    inline double ozelHipotenus(double x, double y) {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    double sayi1 = 3.0;
    double sayi2 = 4.0;
    double negatifSayi = -5.5;
    double aci = 1.57; 

    double hipotenus = ozelHipotenus(sayi1, sayi2);

    printf("Hipotenus: %.2f\n", hipotenus);
    
    printf("Us Alma: %.2f\n", pow(sayi1, 3));
    printf("Karekok: %.2f\n", sqrt(16.0));
    printf("Asagi Yuvarla: %.1f\n", floor(negatifSayi));
    printf("Yukari Yuvarla: %.1f\n", ceil(negatifSayi));
    printf("Mutlak Deger: %.1f\n", fabs(negatifSayi));
    printf("Mod Alma: %.1f\n", fmod(10.5, 3.2));
    printf("Logaritma: %.2f\n", log10(100.0));
    printf("Sinus: %.2f\n", sin(aci));

    return 0;
}