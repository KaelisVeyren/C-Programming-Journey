#include <stdio.h>

int main () {
int a1,b1= 0,c1 = 0;

printf("Bir Sayi girin (Cikis İcin 0): \n");
scanf("%d",&a1);

while (a1 != 0) {
b1 += a1;
printf("\nBir Sayi girin (Cikis İcin 0): ");
scanf("%d",&a1);
}

printf("Girilen Sayilarin Toplami: %d", b1);

return 0;
}
