#include <stdio.h>

int main (){
    float ders_notu;  //değeri boş bıraktık, kullanıcı dolduracak

    // kullanıcıya ne yapması gerektiğini söylüyoruz
    printf("Lütfen ders notunuzu giriniz:");

    //klavyeden girilen float değeri alıp ders_notu değişkeninin adresine (&) kaydediyoruz
    scanf("%f" , &ders_notu);

    printf("girilen not : %.2f\n" , ders_notu);

    if (ders_notu >= 90.0){
        printf("tebrikler ! dersi AA ile gectiniz.");
    }
    else if (ders_notu >= 70.0 && ders_notu <90.0)
    {
        printf("guzel basari ! dersi iyi bir dereceyle gectiniz.\n");
    }
    else if(ders_notu >= 50.0 && ders_notu < 70.0)
    {
        printf("gectiniz ama sonraki donem çok çalişmalisiniz\n");
    }
    else{
        printf("maalesef dersten kaldiniz\n");
    }
}
