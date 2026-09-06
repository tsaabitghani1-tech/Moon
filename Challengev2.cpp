#include <iostream>
#include <string>
using namespace std;

//1
string cekHoki(int n) {
    if (n % 2 == 0 && n % 7 == 0) {
        return "HOKI";
    } else {
        return "BIASA";
    }
}

//2
int hitungTabungan(int hari) {
    int total = 0;
    for (int h = 1; h <= hari; h++) {
        if (h % 2 == 0) {
            total += 5000;
        } else {
            total += 2000;
        }
    }
    return total;
}

//3
string cekTilang(int plat, int tanggal) {
    if (plat % 2 == tanggal % 2) {
        return "AMAN";
    } else {
        return "TILANG";
    }
}

//4 
int hitungKopi(int jumlahGelas) {
    int total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    return total;
}

//5
void tepokNyamuk(int jumlah) {
    for (int i = 1; i <= jumlah; i++) {
        if (i % 3 == 0) {
            cout << "TEPOK" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    cout << cekHoki(14) << endl;
    cout << cekHoki(10) << endl;

    cout << hitungTabungan(3) << endl;

    cout << cekTilang(24, 12) << endl;
    cout << cekTilang(13, 20) << endl;

    cout << hitungKopi(2) << endl;
    cout << hitungKopi(4) << endl;

    tepokNyamuk(5);

    return 0;
}