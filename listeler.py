#Tüm dillerin olduğu ana liste 
tum_diller = ["Python" , "C" , "javaScript", "C++", "C#", "Go"]

# C tabanlı dilleri toplayacağımız boş bir liste oluşturuyoruz
c_tabanli_diller = []


#döngü ile tüm dilleri tek tek kontrol ediyoruz.
for dil in tum_diller :
    #Eğer dilin içinde "C" harfi geçiyorsa (büyük-küçük harfe duyarlıdır)
    if "C" in dil:
        #boş listemizin sonuna bu dili dinamik olarak ekliyoruz.
        c_tabanli_diller.append(dil)

#döngü bittikten sonra filtrelenmiş yeni listemizi ekrana basıyoruz.
print("Filtrelenmiş C Tabanlı Diller: ", c_tabanli_diller)        
