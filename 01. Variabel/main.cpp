#include <iostream>

/*

Variabel adalah tempat untuk menyimpan data yang bisa berubah nilainya selama program berjalan. Setiap variabel memiliki tipe data yang menentukan jenis nilai yang dapat disimpan di dalamnya, seperti bilangan bulat, angka desimal, karakter, dan sebagainya

*/

int main()
{
    // Mendeklarasikan variabel bilangan bulat
    int angka;

    // Memasukkan nilai ke dalam variabel
    angka = 10;

    // Menampilkan nilai variabel
    std::cout << "Nilai variabel angka adalah: " << angka << std::endl;

    // Mengubah nilai variabel
    angka = 20;

    // Menampilkan nilai variabel setelah diubah
    std::cout << "Nilai variabel angka setelah diubah adalah: " << angka << std::endl;

    // Mendeklarasikan dan menginisialisasi variabel
    float bilangan_desimal = 3.14;

    // Menampilkan nilai variabel bilangan_desimal
    std::cout << "Nilai variabel bilangan_desimal adalah: " << bilangan_desimal << std::endl;

    // Menggunakan variabel untuk operasi matematika
    int x = 5;
    int y = 3;
    int hasil_penjumlahan = x + y;

    // Menampilkan hasil operasi matematika
    std::cout << "Hasil penjumlahan x dan y adalah: " << hasil_penjumlahan << std::endl;

    return 0;
}
