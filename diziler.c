#include  <stdio.h>

int main(){
    int notlar[5] = {85, 90, 70, 100, 60};
    int toplam = 0;
    float ortalama;

    printf("---- Ogrenci Notlari ----\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. not: %d\n", i + 1, notlar[i]);
        // Buraya toplamı güncelleyen kodu ekle
        toplam += notlar[i];
    }
    // Ortalamayı hesapla (not: int / int işlemi tam sayı verir.)
    //float sonuç almak için cast işlemi yapmalıyız

    ortalama = (float)toplam / 5;

    printf("-------------------------\n");
    printf("Notlarin toplami: %d\n" , toplam);
    printf("sinif ortalamasi: %.2f\n" , ortalama);
    return 0;
}