#1
# def cek_hoki(n):
#     if n % 2 == 0 and n % 7 == 0:
#         return "HOKI"
#     else:
#         return "BIASA"

# print(cek_hoki(14))
# print(cek_hoki(10))


#2
# def hitung_tabungan(hari):
#     total = 0
#     for h in range(1, hari + 1):
#         if h % 2 == 0:
#             total += 5000
#         else:
#             total += 2000
#     return total

# print(hitung_tabungan(3))


#3
# def cek_tilang(plat, tanggal):
#     if plat % 2 == tanggal % 2:
#         return "AMAN"
#     else:
#         return "TILANG"

# print(cek_tilang(24, 12))
# print(cek_tilang(13, 20))


#4
# def hitung_kopi(jumlah_gelas):
#     total = jumlah_gelas * 5000
#     if jumlah_gelas > 3:
#         total -= 2000
#     return total

# print(hitung_kopi(2))
# print(hitung_kopi(4))


#5
def tepok_nyamuk(jumlah):
    for i in range(1, jumlah + 1):
        if i % 3 == 0:
            print("TEPOK")
        else:
            print(i)

print(tepok_nyamuk(5))