/*

Fibonacci adalah urutan bilangan di mana setiap angka selanjutnya dalam urutan tersebut adalah hasil penjumlahan dari dua angka sebelumnya. Secara formal, deret Fibonacci didefinisikan sebagai berikut:

F(0) = 0,
F(1) = 1,
F(n) = F(n-1) + F(n-2) untuk n > 1.

Ini berarti elemen ke-n dari deret Fibonacci adalah jumlah dari elemen ke-(n-1) dan elemen ke-(n-2).

Contoh penggunaan deret Fibonacci adalah dalam pemodelan pertumbuhan populasi, analisis pasar keuangan, algoritma pencarian optimasi, dan banyak lagi.

*/

#include <iostream>

// Fungsi untuk menghasilkan deret Fibonacci hingga n bilangan
void fibonacci(int n)
{
    int a = 0, b = 1, c;

    std::cout << "Deret Fibonacci hingga " << n << " bilangan:" << std::endl;

    if (n >= 1)
        std::cout << a << " ";
    if (n >= 2)
        std::cout << b << " ";

    for (int i = 3; i <= n; ++i)
    {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    std::cout << std::endl;
}

int main()
{
    int jumlah_bilangan;

    std::cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    std::cin >> jumlah_bilangan;

    fibonacci(jumlah_bilangan);

    return 0;
}

/*

Penjelasan program di atas:

1. Fungsi fibonacci() mengambil parameter n yang menunjukkan jumlah bilangan Fibonacci yang ingin ditampilkan.
2. Variabel a dan b digunakan untuk menyimpan dua bilangan Fibonacci sebelumnya.
3. Perulangan for digunakan untuk menghasilkan bilangan Fibonacci berikutnya dengan menambahkan dua bilangan sebelumnya, yaitu a dan b. Nilai a kemudian diperbarui menjadi nilai b, dan nilai b diperbarui menjadi nilai Fibonacci yang baru dihasilkan c.
4. Program utama meminta pengguna untuk memasukkan jumlah bilangan Fibonacci yang ingin ditampilkan, kemudian memanggil fungsi fibonacci() dengan jumlah bilangan tersebut sebagai argumen.

*/