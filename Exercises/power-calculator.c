#include <stdio.h>

void IslemiYap (int a1, int a2);

int main () {
    int a1, a2;
    printf("Lutfen iki sayi giriniz: ");
    scanf("%d %d", &a1, &a2);
    IslemiYap(a1, a2);
    return 0;
}

void IslemiYap (int a1, int a2) {
    int carpim = 1;
    while (a2 > 0) {
        carpim *= a1;
        a2--;
    }
    printf("Sonuc: %d\n", carpim);
}
