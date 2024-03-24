/*

Fungsi rekursif dalam bahasa pemrograman C++ adalah fungsi yang memanggil dirinya sendiri. Dalam rekursi, masalah dibagi menjadi submasalah yang lebih kecil dan solusi untuk masalah asli diperoleh dengan menggabungkan solusi submasalah tersebut. Fungsi rekursif memiliki dua bagian utama:

1. Kasus Dasar (Base Case): Ini adalah kondisi yang menghentikan rekursi. Jika kasus dasar terpenuhi, pemanggilan rekursif berhenti dan nilai kembali diberikan.

2. Langkah Rekursif: Ini adalah bagian di mana fungsi memanggil dirinya sendiri dengan argumen yang berbeda sehingga pada akhirnya mencapai kasus dasar.

*/

#include <iostream>
using namespace std;

// Deklarasi fungsi rekursif untuk menghitung faktorial
int factorial(int n)
{
    // Base case: faktorial dari 0 adalah 1
    if (n == 0)
        return 1;
    // Langkah rekursif: faktorial dari n adalah n dikali faktorial dari (n-1)
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Masukkan angka untuk menghitung faktorial: ";
    cin >> num;

    // Memanggil fungsi rekursif untuk menghitung faktorial
    cout << "Faktorial dari " << num << " adalah: " << factorial(num) << endl;

    return 0;
}

/*

Penjelasan:

- Dalam program di atas, terdapat fungsi factorial yang merupakan fungsi rekursif untuk menghitung faktorial dari sebuah bilangan.
- Pada fungsi factorial, terdapat dua bagian:
    ~ Kasus Dasar: Jika n adalah 0, maka fungsi mengembalikan 1 sebagai faktorial dari 0.
    ~ Langkah Rekursif: Jika n tidak sama dengan 0, maka fungsi memanggil dirinya sendiri dengan argumen (n - 1).
- Dalam fungsi main, pengguna diminta untuk memasukkan angka untuk dihitung faktorialnya.
- Setelah pengguna memasukkan angka, program memanggil fungsi factorial dengan argumen yang diberikan dan mencetak hasilnya.

Program ini akan terus memanggil dirinya sendiri dengan nilai yang semakin kecil sampai mencapai kasus dasar. Kemudian, nilai-nilai tersebut digabungkan secara berurutan untuk menghasilkan nilai faktorial yang diinginkan.

*/