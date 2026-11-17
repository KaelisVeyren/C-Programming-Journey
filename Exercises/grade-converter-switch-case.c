#include <stdio.h>

int main () {
    int a1,b1;

    printf("Notunuzu girin: ");
    scanf("%d",&a1);

if (a1 >= 90) {
b1 = 1;
}
else if  (a1 >= 80){
b1 = 2;
}
else if  (a1 >= 70){
b1 = 3;
}
else if  (a1 >= 60){
b1 = 4;
}
else if  (a1 >= 50){
b1 = 5;
}
else {
b1 = 6;
}


switch (b1) {

case 1:
printf("Harf Notunuz: AA");
break;

case 2:
printf("Harf Notunuz: AB");
break;

case 3:
printf("Harf Notunuz: BB");
break;

case 4:
printf("Harf Notunuz: BC");
break;

case 5:
printf("Harf Notunuz: CC");
break;

case 6:
printf("Harf Notunuz: FF");
break;

default:
break;
}

return 0;

}
