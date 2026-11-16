#include <stdio.h>

int main() {
    float a1, toplam = 0, ortalama;
    int sayac = 0;

    printf("Bir sayi giriniz: ");
    scanf("%f", &a1);

    while (a1 != -1) {

        if (a1 < 0 || a1 > 100) {
            printf("Gecersiz sayi girdiniz. Tekrar deneyin.\n");
        }
        else {
            toplam += a1;
            sayac++;
        }

        printf("Bir sayi giriniz: ");
        scanf("%f", &a1);
    }

    if (sayac > 0) {
        ortalama = toplam / sayac;

        printf("Toplam: %.2f\n", toplam);
        printf("Ortalama: %.2f\n", ortalama);
    }
    else {
        printf("Hesaplanacak sayi girilmedi.\n");
    }

    return 0;
}
