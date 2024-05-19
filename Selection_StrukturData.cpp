#include <iostream>
using namespace std;

int main() {
    int nilai;

    // Nilai siswa sdn 01 bandung
    cout << " Nilai Siswa: ";
    cin >> nilai;

    // Rentang dan Presikat Nilai siswa
    if (nilai >= 90) {
        cout << "Mendapatkan nilai A" << endl;
    } else if (nilai >= 70) {
        cout << "Mendapatkan nilai B" << endl;
    } else {
        cout << "Mendapatkan nilai C " << endl;
    }

    return 0;
}
