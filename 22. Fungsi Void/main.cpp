/*

Fungsi void dalam C++ adalah jenis fungsi yang tidak mengembalikan nilai apapun. Artinya, fungsi ini digunakan untuk menjalankan serangkaian pernyataan tanpa menghasilkan nilai yang perlu dikembalikan. Biasanya, fungsi void digunakan untuk melakukan tugas tertentu tanpa perlu mengembalikan nilai apa pun.

*/

#include <iostream>

// Deklarasi fungsi void
void sapa();

int main()
{
    // Memanggil fungsi sapa
    sapa();

    return 0;
}

// Definisi fungsi void
void sapa()
{
    std::cout << "Halo, selamat datang di program C++!" << std::endl;
}

/*

Penjelasan:

1. Program ini memiliki struktur dasar yang terdiri dari fungsi main() yang merupakan titik awal eksekusi program.

2. Fungsi sapa() dideklarasikan sebelum main(). Fungsi ini tidak memiliki tipe pengembalian (dinyatakan sebagai void) karena tidak mengembalikan nilai apapun.

3. Di dalam fungsi sapa(), pesan "Halo, selamat datang di program C++!" dicetak ke layar menggunakan std::cout.

4. Di dalam main(), fungsi sapa() dipanggil. Karena ini adalah fungsi void, tidak ada nilai yang dikembalikan dari panggilan ini.

5. Program kemudian selesai dieksekusi setelah main() selesai dieksekusi.

Jadi, fungsi void digunakan ketika kita hanya ingin menjalankan serangkaian pernyataan tanpa perlu mengembalikan nilai. Dalam contoh di atas, fungsi sapa() digunakan hanya untuk mencetak pesan ke layar tanpa perlu mengembalikan nilai apa pun.

*/