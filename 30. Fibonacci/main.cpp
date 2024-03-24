/*

Fibonacci adalah urutan bilangan di mana setiap angka selanjutnya dalam urutan adalah jumlah dari dua angka sebelumnya. Urutan dimulai dengan 0 dan 1. Jadi, urutan Fibonacci pertamanya adalah 0, 1, 1, 2, 3, 5, 8, 13, dan seterusnya.

*/

#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghasilkan bilangan Fibonacci
int fibonacci(int n)
{
    // Kasus dasar: jika n adalah 0 atau 1, kembalikan n
    if (n <= 1)
        return n;
    // Langkah rekursif: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin Anda hasilkan: ";
    cin >> n;

    cout << "Urutan Fibonacci pertama " << n << " adalah: ";
    for (int i = 0; i < n; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

/*

Penjelasan singkat:

- Fungsi fibonacci adalah fungsi rekursif yang mengembalikan nilai dari urutan Fibonacci untuk bilangan ke-n.
- Dalam fungsi fibonacci, terdapat dua bagian:
    ~ Kasus Dasar: Jika n kurang dari atau sama dengan 1, maka fungsi mengembalikan n.
    ~ Langkah Rekursif: Jika n lebih besar dari 1, maka fungsi akan memanggil dirinya sendiri dengan argumen (n - 1) dan (n - 2) untuk mendapatkan dua nilai sebelumnya dalam urutan Fibonacci, kemudian mengembalikan jumlah keduanya.

Dalam main, pengguna diminta untuk memasukkan jumlah bilangan Fibonacci yang ingin dihasilkan. Program kemudian menghasilkan dan mencetak urutan Fibonacci pertama sesuai dengan jumlah yang diminta.

*/