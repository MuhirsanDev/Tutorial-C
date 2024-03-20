#include <iostream>

int main()
{
    int tinggi;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (int i = 1; i <= tinggi; ++i)
    {
        // Mencetak spasi untuk menyusun segitiga
        for (int j = 1; j <= tinggi - i; ++j)
        {
            std::cout << " ";
        }
        // Mencetak karakter '*' untuk bagian atas segitiga
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            std::cout << "*";
        }
        // Pindah ke baris berikutnya setelah mencetak bagian atas segitiga
        std::cout << std::endl;
    }

    return 0;
}

/*

Penjelasan program di atas:

1. Program meminta pengguna untuk memasukkan tinggi segitiga.
2. Perulangan pertama (for) digunakan untuk mengontrol baris-baris segitiga.
3. Di setiap baris, perulangan kedua (for) digunakan untuk mencetak spasi untuk menyusun segitiga bagian atas. Jumlah spasi dihitung berdasarkan tinggi segitiga dan nomor baris saat itu (variabel i).
4. Setelah mencetak spasi, perulangan ketiga (for) digunakan untuk mencetak karakter '' untuk bagian atas segitiga. Jumlah '' dihitung berdasarkan nomor baris saat itu (variabel i). Jumlah '*' pada setiap baris adalah 2 kali nomor baris dikurangi 1 (2 * i - 1).
5. Loop akan terus berjalan hingga mencapai tinggi yang dimasukkan oleh pengguna, dan program akan mencetak segitiga sama kaki.

*/