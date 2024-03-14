#include <iostream>

/*

Tipe data fundamental dalam bahasa pemrograman C++ adalah tipe data yang disediakan oleh bahasa itu sendiri dan telah ditentukan sebelumnya. Tipe data fundamental biasanya digunakan untuk menyimpan nilai dasar seperti angka, karakter, dan nilai kebenaran (boolean).

- int: Tipe data untuk menyimpan bilangan bulat.
- float: Tipe data untuk menyimpan angka desimal (floating point).
- double: Tipe data untuk menyimpan angka desimal dengan presisi ganda dibandingkan dengan float.
- char: Tipe data untuk menyimpan satu karakter.
- bool: Tipe data untuk menyimpan nilai kebenaran, yaitu true atau false.
- void: Tipe data yang menandakan bahwa sebuah fungsi tidak mengembalikan nilai.

*/

int main()
{
    // Tipe data int untuk menyimpan bilangan bulat
    int umur = 25;

    // Tipe data float untuk menyimpan angka desimal
    float nilai_pi = 3.14;

    // Tipe data double untuk menyimpan angka desimal dengan presisi ganda
    double nilai_pi_double = 3.14159265359;

    // Tipe data char untuk menyimpan karakter tunggal
    char huruf = 'A';

    // Tipe data bool untuk menyimpan nilai kebenaran
    bool benar = true;
    bool salah = false;

    // Menampilkan nilai dari setiap variabel
    std::cout << "Umur: " << umur << std::endl;
    std::cout << "Nilai pi (float): " << nilai_pi << std::endl;
    std::cout << "Nilai pi (double): " << nilai_pi_double << std::endl;
    std::cout << "Huruf: " << huruf << std::endl;
    std::cout << "Benar: " << benar << std::endl;
    std::cout << "Salah: " << salah << std::endl;

    return 0;
}


/*

Dalam contoh di atas, kita mendeklarasikan beberapa variabel dengan tipe data fundamental yang berbeda, yaitu int, float, double, char, dan bool. Kemudian, kita memberikan nilai pada variabel-variabel tersebut. Terakhir, kita menggunakan std::cout untuk menampilkan nilai dari setiap variabel ke layar.

*/