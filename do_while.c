#include   <stdio.h>

int main(){
    int sayi;
    // do bloğu içindeki kod en az bir kez çalışır.
    do
    {
        printf("Lutfen 1 ile 10 arasinda bir sayi girin: ");
        scanf("%d", &sayi);
    }
    
    while (sayi < 1 || sayi > 10);  // sayı istenen aralıkta değilse döngü tekrarlar!
    printf("Tebrikler ! Gecerli bir sayi girdiniz: %d\n", sayi);
    return 0;
}