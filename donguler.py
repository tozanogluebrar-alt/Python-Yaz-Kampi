#1'den 10'a kadar sayı sayalım ama 5'i görünce duralım.
print("--- BREAK ÖRNEĞİ ---")
for i in range (1, 11):
    if i == 5:
        print("5'i gördüm, kaçiyorum!")
        break
    print(f"sayi : {i}")

# 1' den 10'a kadar sayalım ama 3'ü atlayalım
print("\n--- CONTINUE ÖRNEĞİ ---")
for i in range (1, 11):
    if i == 3:
        continue   # 3'ü yazdırmadan bir sonraki sayıya (4'e ) zıpla
    print(f"sayi : {i}")   