#include <stdio.h>

int main () {
    int macskoru = 0, toplamskor = 0, i;
    float averajskor;

    for (i = 1; i <= 4; i++) {                            // BU KISIM SKORLARI ALIP TEKER TEKER Q DEGERI VERDIGIMIZ YER
        printf("%d. Macin Skorunu Giriniz: \n", i);
        scanf("%d", &macskoru);

        if (macskoru <= 25){
            printf("%d. Macin Q Skoru Q1'dir. \n", i);
        }
        else if (macskoru <= 50){
            printf("%d. Macin Q Skoru Q2'dir. \n", i);
        }
        else if (macskoru <= 75){
            printf("%d. Macin Q Skoru Q3'dir. \n", i);
        }
        else {
            printf("%d. Macin Q Skoru Q4'dir. \n", i);
        }

        toplamskor += macskoru;
    }

    printf("Turnuva Sonundaki Toplam Skor: %d \n", toplamskor);

    averajskor = (float) toplamskor / 4.0;
    printf("Turnuva Sonundaki Ortalama Skor: %.2f \n", averajskor);

    if (averajskor <= 25){                              // BU KISIM GENEL SKORUN Q DEGERINI VERDIGIMIZ YER
        printf("Ortalama Q Skoru Q1'dir. \n");
    }
    else if (averajskor <= 50){
        printf("Ortalama Q Skoru Q2'dir. \n");
    }
    else if (averajskor <= 75){
        printf("Ortalama Q Skoru Q3'dir. \n");
    }
    else {
        printf("Ortalama Q Skoru Q4'dir. \n");
    }

    return 0;

}
