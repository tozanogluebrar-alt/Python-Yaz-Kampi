#include  <stdio.h>

// Pointer alarak doğrudan bellek adresindeki değerleri değiştirir.
void yer_degistir(int *a, int *b)
{
    int Gecici = *a;  // a'nın gösterdiği adresteki değeri sakla
    *a = *b;          // b'nin değerini a'nın adresine yaz 
    *b = Gecici;      //saklanan degeri b'nin adresine yaz
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Degisimden once : x = %d, y = %d\n" , x , y);

    // Değişkenlerin kendisini değil, bellek adreslerini (&) gönderiyoruz.
    yer_degistir(&x, &y);

    printf("Degisimden sonra : x = %d, y = %d\n", x,y);
}