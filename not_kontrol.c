#include <stdio.h>

int main(){
    float ders_notu = 85.5 ;  // kendi not ortalaman gibi bir değer atadık.

    printf("girilen not : %.2f\n" , ders_notu);
    
    //Koşul blokları başlıyor
    if(ders_notu >= 90.0){
        printf("Tebrikler! Sersi AA ile gectiniz.\n");
    }
    else if (ders_notu >= 70.0 && ders_notu < 90.0) {
        printf("Guzel basari! Dersi iyi bir dereceyle gectiniz.\n ");
    }
    else {
        printf("Maalesef dersten kaldiniz, baska dönemde basarilar.\n");
    }
    return 0;
}