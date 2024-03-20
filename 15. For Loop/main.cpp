/*

For loop adalah salah satu jenis pengulangan (looping) pada bahasa pemrograman C++. For loop digunakan untuk mengeksekusi blok kode secara berulang berdasarkan kondisi tertentu.

Pada for loop, terdapat tiga bagian yang penting:

1. Inisialisasi: Bagian ini dieksekusi sekali di awal loop.
2. Kondisi: Bagian ini dievaluasi sebelum setiap iterasi loop. Jika kondisi bernilai true, iterasi akan dilanjutkan. Jika kondisi bernilai false, loop akan berhenti.
3. Increment/Decrement: Bagian ini dieksekusi setelah setiap iterasi loop.

*/

#include <iostream>

int main()
{
    // Contoh 1: Mencetak angka 1 hingga 5
    std::cout << "Contoh 1:" << std::endl;
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Contoh 2: Menghitung jumlah bilangan genap dari 1 hingga 10
    std::cout << "Contoh 2:" << std::endl;
    int jumlah_genap = 0;
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            jumlah_genap += j;
        }
    }
    std::cout << "Jumlah bilangan genap dari 1 hingga 10: " << jumlah_genap << std::endl;

    // Contoh 3: Mencetak angka secara terbalik dari 10 hingga 1
    std::cout << "Contoh 3:" << std::endl;
    for (int k = 10; k >= 1; k--)
    {
        std::cout << k << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*

Penjelasan program di atas:

1. Contoh 1: Loop ini akan mencetak angka dari 1 hingga 5. Variabel loop i akan dimulai dari 1, kemudian setiap iterasi nilai i akan bertambah 1. Loop akan berhenti ketika nilai i mencapai 6.
2. Contoh 2: Loop ini menghitung jumlah bilangan genap dari 1 hingga 10. Variabel loop j akan dimulai dari 1, dan akan menambahnya satu per satu hingga mencapai 10. Setiap iterasi, jika j adalah bilangan genap, nilai j akan ditambahkan ke variabel jumlah_genap.
3. Contoh 3: Loop ini akan mencetak angka dari 10 hingga 1 secara terbalik. Variabel loop k akan dimulai dari 10, dan akan dikurangi satu per satu hingga mencapai 1.

*/