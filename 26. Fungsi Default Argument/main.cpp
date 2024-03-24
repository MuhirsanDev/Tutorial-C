/*

Fungsi dengan argumen default adalah fitur dalam C++ yang memungkinkan Anda memberikan nilai default kepada satu atau lebih parameter fungsi. Ini berarti jika argumen tidak diberikan saat pemanggilan fungsi, nilai default akan digunakan. Fungsi dengan argumen default memberikan fleksibilitas dalam pemanggilan fungsi, karena memungkinkan pengguna untuk mengabaikan beberapa parameter yang memiliki nilai default.

*/

#include <iostream>

// Fungsi dengan argumen default
int hitungVolumeKotak(int panjang, int lebar = 1, int tinggi = 1)
{
    return panjang * lebar * tinggi;
}

int main()
{
    int panjang, lebar, tinggi;

    // Meminta input panjang, lebar, dan tinggi kotak
    std::cout << "Masukkan panjang kotak: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar kotak: ";
    std::cin >> lebar;
    std::cout << "Masukkan tinggi kotak: ";
    std::cin >> tinggi;

    // Menghitung volume kotak dengan menggunakan fungsi dengan semua argumen diberikan
    int volume1 = hitungVolumeKotak(panjang, lebar, tinggi);
    std::cout << "Volume kotak: " << volume1 << std::endl;

    // Menghitung volume kotak dengan menggunakan fungsi dengan beberapa argumen diberikan
    int volume2 = hitungVolumeKotak(panjang, lebar);
    std::cout << "Volume kotak dengan lebar default: " << volume2 << std::endl;

    // Menghitung volume kotak dengan menggunakan fungsi dengan semua argumen default
    int volume3 = hitungVolumeKotak(panjang);
    std::cout << "Volume kotak dengan lebar dan tinggi default: " << volume3 << std::endl;

    return 0;
}

/*

Penjelasan:

1. Dalam fungsi hitungVolumeKotak, kita memberikan nilai default 1 untuk lebar dan tinggi. Ini berarti jika lebar dan tinggi tidak diberikan saat pemanggilan fungsi, nilai default 1 akan digunakan.

2. Di dalam fungsi main(), kita meminta input panjang, lebar, dan tinggi kotak dari pengguna.

3. Kemudian, kita memanggil fungsi hitungVolumeKotak beberapa kali dengan berbagai kombinasi argumen.

4. Pada pemanggilan pertama, semua argumen diberikan, sehingga nilai sesuai dengan input pengguna digunakan.

5. Pada pemanggilan kedua, hanya panjang dan lebar yang diberikan, sehingga nilai default tinggi (1) yang digunakan.

6. Pada pemanggilan ketiga, hanya panjang yang diberikan, sehingga nilai default lebar (1) dan tinggi (1) yang digunakan.

Fungsi dengan argumen default berguna ketika Anda ingin memberikan nilai default untuk parameter tertentu agar pemanggilan fungsi menjadi lebih fleksibel, dan pengguna hanya perlu memberikan nilai untuk parameter yang berbeda dari nilai default yang diinginkan.

*/