#include <iostream>

using namespace std;

int main()
{
    // Deklarasi dan inisialisasi variabel
    int a = 10;
    int b = 4;

    // Operasi aritmatika digabungkan
    int hasil1 = a + b * 2;   // Hasilnya adalah 10 + (4 * 2) = 18
    int hasil2 = (a + b) * 2; // Hasilnya adalah (10 + 4) * 2 = 28
    int hasil3 = a - b / 2;   // Hasilnya adalah 10 - (4 / 2) = 8
    int hasil4 = (a - b) / 2; // Hasilnya adalah (10 - 4) / 2 = 3
    int hasil5 = a % b;       // Hasilnya adalah sisa dari pembagian 10 dengan 4, yaitu 2

    // Menampilkan hasil
    cout << "Hasil 1: " << hasil1 << endl;
    cout << "Hasil 2: " << hasil2 << endl;
    cout << "Hasil 3: " << hasil3 << endl;
    cout << "Hasil 4: " << hasil4 << endl;
    cout << "Hasil 5: " << hasil5 << endl;

    return 0;
}

/*

Penjelasan:

- Kita deklarasikan dan inisialisasi dua variabel a dan b dengan nilai masing-masing 10 dan 4.
- Kemudian kita lakukan operasi aritmatika yang digabungkan pada variabel hasil1, hasil2, hasil3, hasil4, dan hasil5.
- Setiap operasi aritmatika dihitung sesuai dengan aturan prioritas operator dalam matematika.
- Hasil dari setiap operasi disimpan dalam variabel yang sesuai.
- Terakhir, kita tampilkan hasil dari setiap operasi aritmatika yang digabungkan.

Output yang dihasilkan akan menampilkan nilai-nilai hasil dari masing-masing operasi aritmatika.

*/