#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int umur;

    cout << "Masukkan nama lengkap: ";
    getline(cin, nama);

    cout <<"Masukkan umur: ";
    cin >> umur;

    cout << "Halo: " << nama << ", umur kamu" << umur << " tahun." << endl;

    return 0;
}