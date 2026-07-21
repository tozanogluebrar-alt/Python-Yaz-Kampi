#include  <stdio.h>

int main(){
    int sayi = 42;
    // pointer tanımlama: int türündeki bir değişkenin adresini tutacak (*)
    int *ptr = &sayi;

    printf("sayinin Degeri                : %d\n", sayi);
    printf("Sayinin Bellek Adresi         : %p\n", &sayi);         // %p adres basmak içindir
    printf("pointer'in Tuttugu Adres      : %p\n", ptr);
    printf("pointer'in Gosterdigi Deger   : %d\n\n", *ptr);

    // pointer üzerinden değeri değiştirelim!
    *ptr = 100;                                                   // ptr'nin gösterdiği adresteki değeri 100 yap
    printf("Yeni Sayi Degeri          : %d\n" , sayi);

    return 0;
   
}