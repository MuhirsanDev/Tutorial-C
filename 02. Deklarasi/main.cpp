#include <iostream>

/*

Deklarasi dalam bahasa pemrograman C++ adalah langkah untuk memberitahu kompiler bahwa sebuah variabel, fungsi, atau kelas akan digunakan dalam program. Deklarasi biasanya menyertakan tipe data dari variabel atau fungsi yang dideklarasikan. Ini memberi tahu kompiler bagaimana untuk mengalokasikan memori dan menginterpretasikan nilai yang akan disimpan dalam variabel, atau bagaimana untuk menangani pemanggilan fungsi.

*/

/// Deklarasi fungsi tanpa definisi
void fungsi();

int main()
{
    // Panggilan fungsi
    fungsi();

    return 0;
}

// Definisi fungsi
void fungsi()
{
    std::cout << "Ini adalah contoh fungsi yang dideklarasikan sebelumnya." << std::endl;
}

/*

Dalam contoh ini, kita mendeklarasikan fungsi fungsi() di bagian atas sebelum main(). Ini memberi tahu kompiler bahwa ada sebuah fungsi dengan nama fungsi() yang akan diimplementasikan nanti dalam program. Kemudian, kita memberikan definisi untuk fungsi tersebut setelah fungsi main().

Deklarasi membantu memisahkan antara interface dan implementasi dalam program C++. Ini memungkinkan kita untuk mendeklarasikan sesuatu di suatu tempat dalam program dan mengimplementasikannya di tempat lain.

*/
