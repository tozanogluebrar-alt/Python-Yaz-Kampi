#include  <stdio.h>

int main(){
    int sayi = 1;

    // sayi 5'e eşit veya küçük olduğu sürece çalış
    while (sayi <= 5)
    {
        printf("sayi: %d\n", sayi);
        sayi++;       //sayıyı bir arttırır.(bu olmazsa sonsuz döngüye girer!)
    }
    return 0;
}