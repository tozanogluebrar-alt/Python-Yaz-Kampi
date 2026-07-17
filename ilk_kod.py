#kullanıcıdan doğum yılını metin olarak alıyoruz.
dogum_yili_yazi = input("lütfen dogum yilinizi giriniz: ")

#alınan metni matematiksel tam sayıya (int) dönüştürüyoruz.
dogum_yili_sayi = int(dogum_yili_yazi)

#yaş hesabı yapıyoruz (şu anki yıldan çıkarıyoruz)
yas = 2026 - dogum_yili_sayi

#sonucu ekrana yazdırıyoruz
print("harika! hesaplamalarima göre suanki yasiniz : ")
print(yas)