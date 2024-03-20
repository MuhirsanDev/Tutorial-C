/*

break dan continue adalah dua kata kunci pengontrol aliran (flow control) yang digunakan dalam bahasa pemrograman C++.

1. break: Kata kunci break digunakan untuk menghentikan eksekusi dari sebuah loop secara paksa. Ketika break dieksekusi di dalam loop, loop tersebut akan segera dihentikan, dan eksekusi program akan dilanjutkan ke pernyataan setelah loop tersebut.

2. continue: Kata kunci continue digunakan untuk melanjutkan ke iterasi berikutnya dari sebuah loop. Ketika continue dieksekusi di dalam loop, kode di bawah continue dalam iterasi saat ini akan diabaikan, dan program akan melanjutkan ke iterasi berikutnya dari loop tersebut.

*/

#include <iostream>

int main()
{
    // Contoh penggunaan break
    std::cout << "Contoh penggunaan break:" << std::endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            std::cout << "Loop dihentikan karena i == 5" << std::endl;
            break; // Menghentikan loop saat i == 5
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Contoh penggunaan continue
    std::cout << "Contoh penggunaan continue:" << std::endl;
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            continue; // Melanjutkan ke iterasi berikutnya jika j adalah bilangan genap
        }
        std::cout << j << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*

Penjelasan program di atas:

1. Contoh penggunaan break: Pada loop pertama, jika nilai i sama dengan 5, statement break akan dieksekusi. Ini menyebabkan loop dihentikan, meskipun iterasi loop belum selesai. Sehingga, program akan melanjutkan ke pernyataan di luar loop.
2. Contoh penggunaan continue: Pada loop kedua, jika nilai j merupakan bilangan genap, statement continue akan dieksekusi. Ini menyebabkan pernyataan di bawah continue dalam iterasi saat itu diabaikan, dan program akan melanjutkan ke iterasi berikutnya dari loop. Sehingga, hanya bilangan ganjil yang akan dicetak.

*/