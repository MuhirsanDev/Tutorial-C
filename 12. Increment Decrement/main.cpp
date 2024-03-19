/*

Operator increment dan decrement pada bahasa C++ digunakan untuk menambahkan atau mengurangi nilai suatu variabel secara langsung. Operator increment (++) digunakan untuk menambahkan satu ke nilai variabel, sedangkan operator decrement (--) digunakan untuk mengurangkan satu dari nilai variabel.

Penjelasan singkat:

- Operator increment (++) digunakan untuk menambahkan satu ke nilai variabel.
- Operator decrement (--) digunakan untuk mengurangkan satu dari nilai variabel.

*/

#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    // Operator increment (++): menambahkan satu ke nilai variabel
    cout << "Nilai awal x: " << x << endl;
    x++; // x = x + 1;
    cout << "Nilai setelah increment: " << x << endl;

    // Operator decrement (--): mengurangkan satu dari nilai variabel
    cout << "Nilai awal x: " << x << endl;
    x--; // x = x - 1;
    cout << "Nilai setelah decrement: " << x << endl;

    return 0;
}

/*

Penjelasan singkat program di atas:

1. Program mendeklarasikan variabel x dan memberikan nilai awal 5.
2. Program mencetak nilai awal variabel x.
3. Program menggunakan operator increment (++) untuk menambahkan satu ke nilai variabel x.
4. Program mencetak nilai variabel x setelah operasi increment.
5. Program menggunakan operator decrement (--) untuk mengurangkan satu dari nilai variabel x.
6. Program mencetak nilai variabel x setelah operasi decrement.
7. Output program akan menampilkan nilai variabel x sebelum dan setelah operasi increment dan decrement.

*/