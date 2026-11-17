#include <stdio.h>

int main() {
    int a1;

    printf("Bir sayi girin: ");
    scanf("%d", &a1);

    if (a1 == 0) {
        printf ("Girilen sayi sifirdir.");
    }
    else if (a1 %2 == 0) {
        printf ("Girilen sayi cifttir.");
    }
    else {
        printf ("Girilen sayi tektir.");    
    } 

    return 0;
}
