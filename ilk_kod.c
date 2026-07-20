#include <stdio.h>     //ekrana yazdırma (printf) gibi temel araçları içeren kütüphane 

int main() {
    // 1. değişkenleri türleriyle birlikte tanımlıyoruz:
    int yil = 2026;
    float not_ortalamasi = 3.85;
    char ilk_harf = 'Y';

    //2. ekrana yazdırıyoruz(%d , %f , %c yer tutuculardır):
    printf("yil: %d/n ", yil);
    printf("not ortalamasi: %f/n ", not_ortalamasi);
    printf("ismin ilk harfi: %c/n" , ilk_harf);
    return 0;  // programın başarıyla bittiğini işletim sistemine bildirir
}