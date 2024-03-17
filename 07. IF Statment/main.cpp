#include <iostream>

using namespace std;

/*

Pernyataan if adalah struktur pengendali yang digunakan dalam pemrograman C++ untuk melakukan percabangan atau pengambilan keputusan. Ini memungkinkan program untuk melakukan tindakan yang berbeda tergantung pada kondisi yang diberikan. If statement mengevaluasi kondisi yang diberikan dan menjalankan blok kode yang terkait dengan kondisi tersebut jika kondisi tersebut benar (true).

*/

int main()
{
    int nilai = 75;

    // Memeriksa apakah nilai lebih besar dari atau sama dengan 70
    if (nilai >= 70)
    {
        cout << "Selamat, Anda lulus!" << endl;
    }

    return 0;
}

/*

Penjelasan:

- Kode di atas memeriksa nilai variabel nilai.
- Jika nilai tersebut lebih besar dari atau sama dengan 70, pesan "Selamat, Anda lulus!" akan ditampilkan.
- Jika kondisi tersebut tidak terpenuhi, maka program akan melanjutkan eksekusi setelah blok if.

Output yang dihasilkan dari contoh di atas akan menampilkan pesan "Selamat, Anda lulus!" jika nilai lebih besar dari atau sama dengan 70, dan tidak akan menampilkan pesan tersebut jika nilai kurang dari 70.

*/