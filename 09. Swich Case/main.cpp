#include <iostream>
using namespace std;

/*

SWITCH CASE adalah struktur pengontrol alur program lainnya yang digunakan dalam bahasa pemrograman C++ untuk memilih tindakan yang akan diambil berdasarkan nilai suatu ekspresi. SWITCH CASE sangat berguna ketika ada beberapa kemungkinan nilai untuk dievaluasi.

switch (ekspresi) {
    case nilai_1:
        // blok kode yang akan dieksekusi jika ekspresi sama dengan nilai_1
        break;
    case nilai_2:
        // blok kode yang akan dieksekusi jika ekspresi sama dengan nilai_2
        break;
    // case-case lainnya
    default:
        // blok kode yang akan dieksekusi jika ekspresi tidak cocok dengan nilai-nilai di atas
}

Di dalam struktur SWITCH CASE, setiap case adalah kemungkinan nilai yang dapat diambil oleh ekspresi. Jika nilai ekspresi sama dengan salah satu nilai dalam case, maka blok kode yang sesuai dengan case tersebut akan dieksekusi. Jika tidak ada case yang cocok dengan nilai ekspresi, maka blok kode dalam default akan dieksekusi.

*/

int main()
{
    int nomor_bulan;

    cout << "Masukkan nomor bulan (1-12): ";
    cin >> nomor_bulan;

    switch (nomor_bulan)
    {
    case 1:
        cout << "Januari" << endl;
        break;
    case 2:
        cout << "Februari" << endl;
        break;
    case 3:
        cout << "Maret" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "Mei" << endl;
        break;
    case 6:
        cout << "Juni" << endl;
        break;
    case 7:
        cout << "Juli" << endl;
        break;
    case 8:
        cout << "Agustus" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "Oktober" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "Desember" << endl;
        break;
    default:
        cout << "Nomor bulan tidak valid!" << endl;
    }

    return 0;
}

/*

Penjelasan singkat:

1. Program meminta pengguna untuk memasukkan nomor bulan.
2. Program mengevaluasi nilai nomor bulan menggunakan struktur SWITCH CASE.
3. Jika nomor bulan cocok dengan salah satu case, maka nama bulan yang sesuai akan dicetak.
4. Jika nomor bulan tidak cocok dengan nilai dalam case, maka pesan "Nomor bulan tidak valid!" akan dicetak.

*/