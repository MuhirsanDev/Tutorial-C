#include <iostream>
using namespace std;

// Kalkulator Sederhana

int main()
{
    char operasi;
    double bilangan1, bilangan2, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan operasi matematika yang diinginkan (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    switch (operasi)
    {
    case '+':
        hasil = bilangan1 + bilangan2;
        cout << "Hasil penjumlahan: " << hasil << endl;
        break;
    case '-':
        hasil = bilangan1 - bilangan2;
        cout << "Hasil pengurangan: " << hasil << endl;
        break;
    case '*':
        hasil = bilangan1 * bilangan2;
        cout << "Hasil perkalian: " << hasil << endl;
        break;
    case '/':
        if (bilangan2 != 0)
        {
            hasil = bilangan1 / bilangan2;
            cout << "Hasil pembagian: " << hasil << endl;
        }
        else
        {
            cout << "Error: Pembagian dengan nol tidak dapat dilakukan." << endl;
        }
        break;
    default:
        cout << "Operasi matematika tidak valid." << endl;
    }

    return 0;
}

/*

Penjelasan singkat:

1. Program meminta pengguna untuk memasukkan bilangan pertama.
2. Kemudian, program meminta pengguna untuk memasukkan operasi matematika yang diinginkan.
3. Setelah itu, program meminta pengguna untuk memasukkan bilangan kedua.
4. Program menggunakan struktur SWITCH CASE untuk menentukan operasi yang akan dilakukan.
5. Jika operasi adalah penjumlahan (+), program akan menjumlahkan kedua bilangan dan mencetak hasilnya.
6. Jika operasi adalah pengurangan (-), program akan mengurangkan kedua bilangan dan mencetak hasilnya.
7. Jika operasi adalah perkalian (*), program akan mengalikan kedua bilangan dan mencetak hasilnya.
8. Jika operasi adalah pembagian (/), program akan memeriksa apakah pembagi bukan nol, kemudian melakukan pembagian dan mencetak hasilnya. Jika pembagi adalah nol, program akan mencetak pesan kesalahan.
9. Jika operasi tidak valid, program akan mencetak pesan kesalahan.
10. Program selesai.

*/