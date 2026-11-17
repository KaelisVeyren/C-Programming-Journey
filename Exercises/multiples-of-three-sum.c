#include <stdio.h>

int main () {
int a1,b1= 0,c1 = 0;

printf("Bir Sayi girin: \n");
scanf("%d",&a1);

printf("3'e Bolunen Sayilar: ");

for (c1 = 3; c1 <= a1; c1 += 3) {
printf("%d ", c1);
b1 = b1 + c1;
}

printf("\nToplam: %d", b1);

return 0 ;
}
