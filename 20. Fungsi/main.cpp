/*

Di C++, sebuah fungsi adalah sebuah blok kode yang secara independen dapat melakukan tugas tertentu. Fungsi digunakan untuk mengelompokkan serangkaian pernyataan untuk melakukan tugas tertentu. Dengan menggunakan fungsi, kode dapat menjadi lebih terstruktur, mudah dipahami, dan dapat digunakan kembali.

Setiap fungsi di C++ memiliki tiga bagian utama: tipe pengembalian (return type), nama fungsi, dan parameter. Tipe pengembalian menentukan jenis nilai yang dikembalikan oleh fungsi (jika ada), nama fungsi adalah identifikasi unik untuk memanggil fungsi, dan parameter (opsional) adalah nilai yang diterima oleh fungsi untuk digunakan dalam perhitungan.

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
    return a + b;
}

/*

Penjelasan:

1. Di sini, kita mendeklarasikan fungsi tambah di bagian atas program (sebelum main). Ini memberi tahu kompiler bahwa ada sebuah fungsi bernama tambah yang akan digunakan di dalam program, tetapi definisi sebenarnya dari fungsi tersebut diberikan setelah main().

2. Di dalam fungsi main(), kita mendeklarasikan dua variabel num1 dan num2, yang akan digunakan sebagai argumen saat memanggil fungsi tambah.

3. Kemudian, kita memanggil fungsi tambah dengan menyertakan num1 dan num2 sebagai argumennya. Hasil dari penambahan disimpan dalam variabel hasil.

4. Fungsi tambah didefinisikan setelah main(). Fungsi ini menerima dua parameter bertipe int dan mengembalikan hasil penambahan dari kedua parameter tersebut.

5. Setelah itu, program mencetak hasil penambahan menggunakan pernyataan std::cout.

Jadi, dalam program di atas, fungsi tambah mengambil dua bilangan bulat sebagai input, menambahkannya bersama, dan mengembalikan hasil penambahan tersebut ke main(), di mana itu dicetak.

*/