/*

Fungsi return dalam C++ digunakan untuk mengembalikan nilai dari sebuah fungsi ke tempat pemanggilnya. Ketika sebuah fungsi selesai dieksekusi, nilai yang dihasilkan bisa dikembalikan ke bagian dari program yang memanggil fungsi tersebut menggunakan pernyataan return.

*/

#include <iostream>

// Deklarasi fungsi
int tambah(int a, int b);

int main()
{
    int num1 = 5;
    int num2 = 3;

    // Memanggil fungsi tambah dan menyimpan hasilnya
    int hasil = tambah(num1, num2);

    // Menampilkan hasil penambahan
    std::cout << "Hasil penambahan: " << hasil << std::endl;

    return 0;
}

// Definisi fungsi tambah
int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil; // Mengembalikan nilai hasil penambahan
}

/*

Penjelasan:

1. Program ini memiliki struktur yang sama seperti contoh sebelumnya, namun fungsi tambah kini menggunakan pernyataan return untuk mengembalikan nilai hasil penambahan.

2. Setelah variabel hasil dihitung, nilai tersebut dikembalikan ke tempat pemanggilnya (di main()) menggunakan pernyataan return hasil.

3. Nilai yang dikembalikan kemudian disimpan dalam variabel hasil di dalam fungsi main(), yang kemudian dicetak ke layar.

Jadi, dengan menggunakan pernyataan return, kita dapat mengembalikan nilai dari sebuah fungsi, yang kemudian dapat digunakan di tempat pemanggilnya untuk berbagai keperluan, seperti penyimpanan ke dalam variabel, penggunaan dalam perhitungan selanjutnya, atau bahkan output ke pengguna.

*/