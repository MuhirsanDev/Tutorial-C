/*

Fungsi overload adalah konsep dalam C++ di mana Anda dapat mendefinisikan beberapa fungsi dengan nama yang sama dalam satu cakupan (scope), tetapi dengan parameter yang berbeda. Dengan kata lain, Anda dapat memiliki beberapa fungsi dengan nama yang sama tetapi memiliki jumlah dan tipe parameter yang berbeda.

*/

#include <iostream>

// Fungsi overload untuk menambahkan dua bilangan bulat
int tambah(int a, int b)
{
    return a + b;
}

// Fungsi overload untuk menambahkan tiga bilangan bulat
int tambah(int a, int b, int c)
{
    return a + b + c;
}

// Fungsi overload untuk menambahkan dua bilangan desimal
double tambah(double a, double b)
{
    return a + b;
}

int main()
{
    // Memanggil fungsi tambah dengan dua bilangan bulat
    std::cout << "Hasil penambahan (int): " << tambah(3, 5) << std::endl;

    // Memanggil fungsi tambah dengan tiga bilangan bulat
    std::cout << "Hasil penambahan (int, int, int): " << tambah(3, 5, 7) << std::endl;

    // Memanggil fungsi tambah dengan dua bilangan desimal
    std::cout << "Hasil penambahan (double): " << tambah(3.5, 2.5) << std::endl;

    return 0;
}

/*

Penjelasan:

1. Dalam program di atas, ada tiga definisi fungsi tambah, masing-masing memiliki nama yang sama tetapi jumlah dan tipe parameter yang berbeda.

2. Fungsi pertama tambah(int a, int b) mengambil dua bilangan bulat dan mengembalikan hasil penjumlahan mereka.

3. Fungsi kedua tambah(int a, int b, int c) mengambil tiga bilangan bulat dan mengembalikan hasil penjumlahan mereka.

4. Fungsi ketiga tambah(double a, double b) mengambil dua bilangan desimal dan mengembalikan hasil penjumlahan mereka.

5. Dalam main(), kita memanggil ketiga fungsi tambah dengan argumen yang sesuai.

Fungsi overload berguna ketika Anda ingin menggunakan nama yang sama untuk operasi yang berbeda tergantung pada jenis atau jumlah parameter yang digunakan dalam pemanggilan fungsi. Hal ini membantu dalam membuat kode lebih bersih dan mudah dibaca.

*/