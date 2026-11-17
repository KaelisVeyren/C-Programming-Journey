#include <stdio.h>

int main () {
int a1;


do {
printf("1 - Oyunu Baslat \n2 - Ayarlar \n3 - Cikis \n: \nSeciminiz: ");
scanf("%d",&a1);
} while (a1 < 1 || a1 > 3);

printf("Seciminiz Basariyla Alindi");

return 0;
}
