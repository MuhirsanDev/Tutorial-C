#include <iostream>

using namespace std;

int main()
{
    // Deklarasi variabel untuk panjang sisi persegi
    float sisi;

    // Meminta pengguna untuk memasukkan panjang sisi persegi
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    // Menghitung luas persegi (sisi * sisi)
    float luas = sisi * sisi;

    // Menghitung keliling persegi (4 * sisi)
    float keliling = 4 * sisi;

    // Menampilkan hasil perhitungan
    cout << "Luas persegi: " << luas << endl;
    cout << "Keliling persegi: " << keliling << endl;

    return 0;
}

/*

Penjelasan program:

1. Program dimulai dengan menyertakan pustaka iostream untuk menggunakan fungsi input-output standar dalam C++.
2. Fungsi main() adalah fungsi utama yang akan dieksekusi oleh program.
3. Variabel sisi dideklarasikan untuk menyimpan panjang sisi persegi.
4. Pengguna diminta untuk memasukkan panjang sisi persegi menggunakan cout untuk menampilkan pesan dan cin untuk menerima input dari pengguna.
5. Luas persegi dihitung dengan mengalikan panjang sisi dengan dirinya sendiri (sisi * sisi), dan hasilnya disimpan dalam variabel luas.
6. Keliling persegi dihitung dengan mengalikan panjang sisi dengan 4 (4 * sisi), dan hasilnya disimpan dalam variabel keliling.
7. Hasil perhitungan luas dan keliling persegi ditampilkan kepada pengguna menggunakan cout.
8. Program mengembalikan nilai 0, menandakan bahwa program berjalan dengan sukses.

Program ini sederhana tetapi menunjukkan penggunaan operator aritmatika untuk melakukan perhitungan matematika dasar dalam C++.

*/