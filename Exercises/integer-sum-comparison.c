#include <stdio.h>

int main () {

int tamsayi1, tamsayi2, toplam;

printf("Birinci tam sayiyi giriniz: ");
scanf("%d", &tamsayi1);

printf("ikinci tam sayiyi giriniz: ");
scanf("%d", &tamsayi2);

toplam = tamsayi1 + tamsayi2;

if ( tamsayi1 < toplam) {
printf("Sonuc: %d, tamsayi 1den buyuktur", toplam);
}

return 0;
}
