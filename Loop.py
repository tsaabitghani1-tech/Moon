#rows=5
#for i in range(1, rows+1):
    #print(" "*(rows-i) + "*" * (2*i-1))

#di py range akhir itu tidak dihitung. jadi misal rows=5, bakal terhitungnya 4. 
# makanya di sana ditulis rows+1,biar tetap 5

#looping 1: print spasi sebanyak rows-i (5-1) yaitu 4. lalu baru print *

rows= 5
while rows >= 1:
    print("*" * rows)
    rows -= 1

# rows -= 1 artinya rows = rows -1
