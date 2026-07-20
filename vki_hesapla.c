#include <stdio.h>

int main(){
    int kilo;   // tam sayı(int)olarak kilo alacağız
    float boy;   //ondalıklı sayı (float)olarak boy alacağız
    float vki;   //hesaplama sonucu ondalıklı çıkacağı için float

    printf("Lütfen kilonuzu kg olarak giriniz: ");
    scanf("%d", &kilo);  //int için %d kullanıyoruz.

    printf("lütfen boyunuzu metre olarak giriniz: ");
    scanf("%f", &boy);   // float için %f kullanıyoruz.

    // VKİ hesaplama 
    vki = kilo / (boy * boy);
    printf("\n--- SONUC ---\n");
    printf("Vucut Kitle İndeksiniz: %.2f\n" , vki);

    // Mantıksal Kontroller
    if (vki < 18.5)
    {
        printf("kategori: Zayif\n");
    }
    else if(vki >= 18.5 && vki <= 24.9)
    {
        printf("Kategori : Normal agirlikta\n");
    }
    else if(vki >= 25.0 && vki <= 29.9)
    {
        printf("kategori: kilolu\n");
    }
    else
    {
        printf("Kategori : Obez. Sagliginiza dikkat etmelisiniz. \n");
    }
    return 0;
}