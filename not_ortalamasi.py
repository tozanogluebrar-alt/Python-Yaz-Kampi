#kullanıcıdan notu al.
not_degeri = int(input("Notunuzu giriniz: "))

#koşulları sırasıyla kontrol ediyoruz.
if not_degeri >= 90.0:
    print("Harika ! Notun: AA")
elif not_degeri >= 80:
    print("çok iyi! Notun: BA")
elif not_degeri >= 70:
    print("iyi ! Notun: BA")     
elif not_degeri >= 50:
    print("Geçer ! Notun: CC") 
else:
    print("Maalesef, kaldiniz. :(Notun: FF)")          