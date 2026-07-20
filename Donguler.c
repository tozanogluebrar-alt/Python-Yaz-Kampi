#include  <stdio.h>

int main(){
    int hedefSayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &hedefSayi);

    // 1'den başlayıp kullanıcının girdiği sayıya kadar giden dinamik for döngüsü
    for(int i = 1; i <= hedefSayi; i++ )
    {
        printf("sayi: %d\n", i);
    } 
    return 0;

}