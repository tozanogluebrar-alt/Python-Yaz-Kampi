#kullanıcıdan doğrudan yaşı alıp tam sayıya çeviriyoruz
yas = int(input("lütfen yasinizi giriniz: "))

#karar mekanizması başlıyor
if yas >= 18:
    #bu satırda içerde! sadece yaş 18 veya büyükse çalışır.
    print("Tebrikler! Ehliyet almaya hak kazanabilirsiniz. ")
else:
    # bu satır da içerde! Şart sağlanmazsa çalışır.
    print ("maalesef yasiniz ehliyet almak icin yetersiz. ")

#bu satır en başta (girintisiz) , yani if/else ile bağı yok. her halükarda çalışır.
print ("program başariyla sonlandi. ")        