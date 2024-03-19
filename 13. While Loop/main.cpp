/*

While loop adalah salah satu struktur kontrol perulangan dalam bahasa pemrograman C++. Loop ini akan menjalankan blok kode secara berulang selama suatu kondisi tertentu bernilai benar (true). Saat kondisi tersebut bernilai salah (false), eksekusi akan keluar dari loop.

Penjelasan singkat:

- While loop akan mengevaluasi kondisi terlebih dahulu.
- Jika kondisi bernilai benar (true), blok kode dalam while loop akan dieksekusi.
- Setelah itu, kondisi akan dievaluasi lagi.
- Proses akan terus berlanjut selama kondisi tetap bernilai benar (true).
- Jika kondisi bernilai salah (false), eksekusi akan keluar dari loop.

*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1; // Inisialisasi variabel iterator

    // While loop akan berjalan selama nilai i kurang dari atau sama dengan 5
    while (i <= 5)
    {
        cout << i << " "; // Mencetak nilai i
        i++;              // Increment nilai i untuk menghindari infinite loop
    }

    cout << endl;

    return 0;
}

/*

Penjelasan singkat program di atas:

1. Program mendeklarasikan variabel i dengan nilai awal 1 sebagai iterator.
2. While loop akan mengevaluasi apakah nilai i kurang dari atau sama dengan 5.
3. Jika kondisi tersebut terpenuhi (true), maka program akan mencetak nilai i dan kemudian meningkatkan nilai i dengan menggunakan operator increment (++).
4. Proses ini akan terus berlanjut sampai nilai i mencapai 5.
5. Setelah itu, eksekusi keluar dari loop dan program selesai.

*/