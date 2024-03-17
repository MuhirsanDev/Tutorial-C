#include <iostream>

using namespace std;

/*

Relasi komparasi adalah operator yang digunakan untuk membandingkan dua nilai dan menghasilkan nilai boolean (true atau false) berdasarkan hasil perbandingan tersebut. Operator relasi komparasi umumnya digunakan untuk membuat ekspresi logika dalam kondisi percabangan dan perulangan dalam pemrograman C++.

*/

int main()
{
    int a = 5;
    int b = 3;

    // Pengujian kesamaan
    bool kesamaan = (a == b);
    cout << "Apakah a sama dengan b? " << kesamaan << endl; // Output: 0 (false)

    // Pengujian ketidaksamaan
    bool ketidaksamaan = (a != b);
    cout << "Apakah a tidak sama dengan b? " << ketidaksamaan << endl; // Output: 1 (true)

    // Lebih besar
    bool lebih_besar = (a > b);
    cout << "Apakah a lebih besar dari b? " << lebih_besar << endl; // Output: 1 (true)

    // Lebih kecil
    bool lebih_kecil = (a < b);
    cout << "Apakah a lebih kecil dari b? " << lebih_kecil << endl; // Output: 0 (false)

    // Lebih besar sama dengan
    bool lebih_besar_sama_dengan = (a >= b);
    cout << "Apakah a lebih besar dari atau sama dengan b? " << lebih_besar_sama_dengan << endl; // Output: 1 (true)

    // Lebih kecil sama dengan
    bool lebih_kecil_sama_dengan = (a <= b);
    cout << "Apakah a lebih kecil dari atau sama dengan b? " << lebih_kecil_sama_dengan << endl; // Output: 0 (false)

    return 0;
}

/*

Penjelasan:

- Kita deklarasikan dua variabel a dan b dengan nilai masing-masing 5 dan 3.
- Kemudian, kita menggunakan operator relasi komparasi untuk membandingkan nilai a dan b.
- Setiap hasil perbandingan disimpan dalam variabel boolean dan kemudian dicetak untuk dilihat hasilnya.
- Output yang dihasilkan akan menunjukkan apakah perbandingan yang dilakukan itu benar (true) atau salah (false).

*/