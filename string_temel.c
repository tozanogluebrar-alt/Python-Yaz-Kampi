#include  <stdio.h>
#include  <string.h>  // Metin fonksiyonları içiğn (strlen, strcmp vb.)

int main(){
    // 1.Metin tanımlama 
    char isim[20] = "yazilimci";

    // 2. Metni ekrana basma (%s kullanılır)
    printf("Isim: %s\n", isim);

    // 3. Metnin uzunluğunu bulma (strlen)
    int uzunluk = strlen(isim);
    printf("Ismin uzunlugu: %d karakter \n", uzunluk);

    // 4. Kullanıcıdan metin alma 
    char sehir[20];
    printf("yasadiginiz sehri girin: ");
    scanf("%s", sehir);   //Not: scanf' te string alırken & işaretine gerek yoktur!

    printf("Girilen sehir:%s\n", sehir);

    return 0;
}