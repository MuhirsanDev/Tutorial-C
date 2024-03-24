// Menghitung Luas Dan Keliling Persegi Panjang

#include <iostream>

// Fungsi untuk menghitung luas persegi panjang
double hitungLuas(double panjang, double lebar)
{
    return panjang * lebar;
}

// Fungsi untuk menghitung keliling persegi panjang
double hitungKeliling(double panjang, double lebar)
{
    return 2 * (panjang + lebar);
}

int main()
{
    double panjang, lebar;

    // Meminta input dari pengguna
    std::cout << "Masukkan panjang persegi panjang: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar persegi panjang: ";
    std::cin >> lebar;

    // Menghitung luas dan keliling
    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);

    // Menampilkan hasil
    std::cout << "Luas persegi panjang: " << luas << std::endl;
    std::cout << "Keliling persegi panjang: " << keliling << std::endl;

    return 0;
}

/*

Penjelasan:

1. Dua fungsi didefinisikan di awal program, yaitu hitungLuas dan hitungKeliling, yang menerima panjang dan lebar persegi panjang sebagai argumen dan mengembalikan luas dan kelilingnya masing-masing.

2. Di dalam fungsi main(), dua variabel panjang dan lebar dideklarasikan untuk menyimpan input pengguna.

3. Pengguna diminta untuk memasukkan nilai panjang dan lebar persegi panjang menggunakan std::cin.

4. Kemudian, fungsi hitungLuas dipanggil dengan menyertakan panjang dan lebar yang dimasukkan oleh pengguna sebagai argumen. Hasilnya disimpan dalam variabel luas.

5. Fungsi hitungKeliling juga dipanggil dengan parameter yang sama, dan hasilnya disimpan dalam variabel keliling.

6. Hasil luas dan keliling kemudian dicetak ke layar menggunakan std::cout.

Program ini memungkinkan pengguna untuk memasukkan nilai panjang dan lebar persegi panjang, dan kemudian menghitung dan mencetak luas dan kelilingnya.

*/