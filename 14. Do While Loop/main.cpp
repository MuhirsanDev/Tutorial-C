/*

Do-While loop adalah salah satu jenis loop dalam bahasa pemrograman C++, yang mirip dengan while loop. Perbedaannya terletak pada urutan evaluasi kondisi. Pada Do-While loop, blok kode akan dieksekusi terlebih dahulu, baru kemudian kondisi dievaluasi. Ini berarti bahwa setidaknya satu iterasi loop akan dijalankan sebelum kondisi dicek. Jika kondisi bernilai benar (true), loop akan terus berjalan; jika tidak, eksekusi keluar dari loop.

Penjelasan singkat:

- Do-While loop mengeksekusi blok kode terlebih dahulu, kemudian mengevaluasi kondisi.
- Jika kondisi bernilai benar (true), loop akan diulangi.
- Jika kondisi salah (false), eksekusi keluar dari loop.

Berikut adalah contoh program sederhana yang menggunakan Do-While loop dalam C++. Program ini akan meminta pengguna untuk memasukkan bilangan bulat positif, dan akan terus meminta input sampai bilangan yang dimasukkan tidak positif:

*/

#include <iostream>
using namespace std;

int main() {
    int num;

    // Do-While loop akan mengeksekusi setidaknya sekali
    do {
        cout << "Masukkan bilangan bulat positif: ";
        cin >> num;

        // Cek apakah bilangan tidak positif
        if (num <= 0) {
            cout << "Bilangan harus positif! Silakan coba lagi." << endl;
        }
    } while (num <= 0);

    cout << "Bilangan yang dimasukkan adalah: " << num << endl;

    return 0;
}

/*

Penjelasan singkat program di atas:

1. Program meminta pengguna untuk memasukkan bilangan bulat positif.
2. Do-While loop akan menjalankan blok kode terlebih dahulu tanpa memeriksa kondisi.
3. Setelah blok kode dieksekusi, kondisi akan dievaluasi.
4. Jika bilangan yang dimasukkan tidak positif (kurang dari atau sama dengan 0), program akan mencetak pesan kesalahan dan meminta input lagi.
5 Proses akan terus berlanjut sampai pengguna memasukkan bilangan yang positif.
6. Setelah itu, program akan mencetak bilangan yang dimasukkan.

*/