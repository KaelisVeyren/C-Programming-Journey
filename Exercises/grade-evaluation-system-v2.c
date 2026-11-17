#include <stdio.h>

int SinirKontrol (int a1);
void HarfAtama (int a1);

int main () {
int a1;

do {
printf("Sinav Puaninizi Giriniz: \n");
scanf("%d", &a1);
} while (SinirKontrol(a1));
HarfAtama (a1);
return 0;
}


int SinirKontrol (int a1) {
if (a1 < 0 || a1 > 100) {
printf ("Gecersiz Not!\n");
return 1;
}
return 0;
}

void HarfAtama (int a1) {
char b2;
if ( a1 >= 90) {
b2 = 'A';
} else if (a1 >= 80) {
b2 = 'B';
} else if (a1 >= 70) {
b2 = 'C';
} else if (a1 >= 60) {
b2 = 'D';
} else {
b2 = 'F';
}
printf("Notunuz: %c",b2);
}
