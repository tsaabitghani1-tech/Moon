#include <iostream>
using namespace std;

int main() {
    int nilai = 85;

    switch (nilai / 10) {
        case 9:
            cout << "Nilai A" << endl;
            break;
        case 8:
            cout << "Nilai B" << endl;
            break;
        case 7:
            cout << "Nilai C" << endl;
            break;
        case 6:
            cout << "Nilai D" << endl;
            break;
        default:
            cout << "Nilai E" << endl;
    }

    return 0;
}