#include <iostream>
using namespace std;

/*

IF ELSE merupakan sebuah struktur pengontrol alur program yang digunakan dalam bahasa pemrograman C++ untuk mengambil keputusan berdasarkan suatu kondisi. Dengan menggunakan IF ELSE, program dapat mengevaluasi suatu kondisi, dan berdasarkan hasil evaluasi tersebut, akan diambil tindakan tertentu.

if (kondisi) {
    // blok kode yang akan dieksekusi jika kondisi bernilai benar (true)
} else {
    // blok kode yang akan dieksekusi jika kondisi bernilai salah (false)
}


*/

int main()
{
    int angka;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;

    if (angka > 0)
    {
        cout << "Bilangan tersebut adalah positif." << endl;
    }
    else if (angka < 0)
    {
        cout << "Bilangan tersebut adalah negatif." << endl;
    }
    else
    {
        cout << "Bilangan tersebut adalah nol." << endl;
    }

    return 0;
}

/*

Penjelasan singkat:

1. Program meminta pengguna untuk memasukkan sebuah bilangan bulat.
2. Program mengevaluasi kondisi menggunakan IF ELSE.
3. Jika bilangan lebih besar dari 0, maka program mencetak bahwa bilangan tersebut adalah positif.
4. Jika bilangan kurang dari 0, maka program mencetak bahwa bilangan tersebut adalah negatif.
5. Jika bilangan sama dengan 0, maka program mencetak bahwa bilangan tersebut adalah nol.

*/