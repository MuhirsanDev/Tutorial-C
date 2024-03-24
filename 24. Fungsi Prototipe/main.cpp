/*

Fungsi prototipe dalam bahasa C++ adalah deklarasi fungsi yang menyediakan informasi tentang fungsi sebelum definisinya. Ini memungkinkan Anda untuk menggunakan fungsi sebelum fungsi itu sendiri didefinisikan dalam kode. Dengan kata lain, Anda dapat mendeklarasikan fungsi di bagian awal kode, kemudian mendefinisikannya di bagian lain.

*/

#include <iostream>

// Deklarasi fungsi prototipe
double hitungLuas(double panjang, double lebar);
double hitungKeliling(double panjang, double lebar);

int main() {
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

// Definisi fungsi hitungLuas
double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

// Definisi fungsi hitungKeliling
double hitungKeliling(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}


/*

Penjelasan:

1. Di awal program, kita mendeklarasikan dua fungsi prototipe: hitungLuas() dan hitungKeliling(). Ini memberi tahu kompiler bahwa ada dua fungsi dengan nama tersebut yang akan digunakan di dalam program, meskipun definisinya belum ditemukan.

2. Di dalam fungsi main(), kita menggunakan fungsi-fungsi ini tanpa definisinya. Kompiler mengetahui tentang fungsi-fungsi ini berkat deklarasi prototipe di awal program.

3. Setelah fungsi main(), kita mendefinisikan kedua fungsi, hitungLuas() dan hitungKeliling(). Ini adalah tempat di mana kita memberikan implementasi fungsi-fungsi tersebut.

Dengan menggunakan fungsi prototipe, Anda dapat memisahkan deklarasi fungsi dari definisinya, sehingga Anda dapat menggunakan fungsi-fungsi tersebut di dalam kode sebelum mereka didefinisikan. Hal ini membantu dalam mengorganisir dan mengelompokkan kode dengan lebih baik, terutama dalam proyek yang lebih besar.

*/