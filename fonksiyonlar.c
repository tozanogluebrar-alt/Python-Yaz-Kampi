#include   <stdio.h>

// 1. Geriye değer DÖNDÜRMEYEN fonksiyon (void)
void selamla()
{
    printf("Merhaba! C dilinde fonksiyonlar konusuna gectik. \n");
}

// 2. İki tam sayıyı toplayıp sonucu DÖNDÜREN fonksiyon(int)
int toplama (int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}

// 3. İki tam sayıyı çarpan fonksiyon
int carpma (int a, int b)
{
    return a * b;
}

// 4. sayıların karesini alan fonksiyon 
int kare_al(int x)
{
    return x * x;
}

int main(){
    // void fonksiyon çağrısı
    selamla();

    // int dönen fonksiyon çağrıları
    int toplam_sonuc = toplama(15, 25);
    int carpim_sonuc = carpma(6, 7);
    int kare_sonuc = kare_al(5);

    printf("Toplam Sonucu : %d\n", toplam_sonuc);
    printf("carpim Sonucu : %d\n", carpim_sonuc);
    printf("kare Sonucu : %d\n", kare_sonuc);

    return 0;
}