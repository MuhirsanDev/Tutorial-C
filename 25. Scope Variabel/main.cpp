/*

Scope variabel dalam C++ merujuk pada bagian dari kode di mana variabel dapat diakses dan digunakan. Setiap variabel yang dideklarasikan memiliki scope tertentu yang menentukan di mana variabel tersebut dapat diakses dalam program. Ada beberapa jenis scope variabel dalam C++, yaitu:

1. Global Scope: Variabel yang dideklarasikan di luar semua fungsi memiliki global scope. Ini berarti variabel tersebut dapat diakses dari mana saja dalam program.

2. Local Scope: Variabel yang dideklarasikan di dalam sebuah blok kode atau fungsi memiliki local scope. Variabel tersebut hanya dapat diakses di dalam blok kode atau fungsi tempat itu dideklarasikan.

3. Block Scope: Variabel yang dideklarasikan di dalam sebuah blok kode memiliki block scope. Variabel tersebut hanya dapat diakses di dalam blok kode tempat itu dideklarasikan.

*/

#include <iostream>

// Variabel global
int globalVar = 10;

void fungsi()
{
    // Variabel local pada fungsi
    int localVar = 20;

    // Mencetak nilai variabel lokal
    std::cout << "Nilai localVar dalam fungsi: " << localVar << std::endl;

    // Mencetak nilai variabel global
    std::cout << "Nilai globalVar dalam fungsi: " << globalVar << std::endl;
}

int main()
{
    // Variabel local pada main()
    int localVar = 30;

    // Mencetak nilai variabel lokal
    std::cout << "Nilai localVar dalam main: " << localVar << std::endl;

    // Mencetak nilai variabel global
    std::cout << "Nilai globalVar dalam main: " << globalVar << std::endl;

    // Memanggil fungsi
    fungsi();

    return 0;
}

/*

Penjelasan:

1. Program ini memiliki satu variabel global (globalVar) yang dapat diakses dari mana saja dalam program.

2. Di dalam fungsi main(), ada satu variabel lokal dengan nama yang sama (localVar). Variabel lokal ini hanya dapat diakses di dalam fungsi main().

3. Fungsi fungsi() juga memiliki variabel lokal dengan nama yang sama (localVar). Variabel lokal ini berbeda dari variabel lokal di fungsi main(), karena memiliki scope yang berbeda.

4. Ketika program dijalankan, nilai variabel lokal di main() dan fungsi() dicetak ke layar, bersama dengan nilai variabel global.

5. Ketika fungsi fungsi() dipanggil dari main(), variabel lokal di dalam fungsi fungsi() akan diakses dan dicetak ke layar.

Dengan menggunakan scope variabel, Anda dapat mengatur visibilitas dan aksesibilitas variabel dalam program Anda, sehingga memungkinkan untuk menghindari konflik nama dan memperjelas struktur program.


*/