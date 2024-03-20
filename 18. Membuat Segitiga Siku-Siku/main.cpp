#include <iostream>

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (int i = 1; i <= tinggi; ++i) {
        // Mencetak karakter '*' sebanyak i pada setiap baris
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        // Pindah ke baris berikutnya setelah mencetak '*' sebanyak i
        std::cout << std::endl;
    }

    return 0;
}

/*

Penjelasan program di atas:

1. Program meminta pengguna untuk memasukkan tinggi segitiga.
2. Perulangan pertama (for) digunakan untuk mengontrol baris-baris segitiga.
3. Di setiap baris, perulangan kedua (for) digunakan untuk mencetak karakter '*' sebanyak nomor baris saat itu (variabel i).
4. Setelah mencetak '*' sebanyak i, program akan pindah ke baris berikutnya dengan mencetak std::endl (baris baru).
5. Loop akan terus berjalan hingga mencapai tinggi yang dimasukkan oleh pengguna.

*/