#include <iostream>
using namespace std;

int luasPersegi(int sisi) {
    return sisi * sisi;
}

void cekGinjalGenap(int angka) {
    if (angka % 2 == 0) {
        cout << "GENAP" << endl;
    }
    else {
        cout << "GANJIL" << endl;
    }
}

int konversiSuhu( int celsius) {
    return celsius * 1.8 + 32;
}

int main() {
    cout << luasPersegi(5) << endl;
    cekGinjalGenap(4);
    cout << konversiSuhu(25) << endl;
    return 0;
}
