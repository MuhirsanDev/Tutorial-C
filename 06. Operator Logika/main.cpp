#include <iostream>

using namespace std;

/*

Operator logika adalah operator yang digunakan untuk membandingkan dua atau lebih ekspresi boolean dan menghasilkan nilai boolean baru berdasarkan hasil evaluasi logika dari ekspresi tersebut. Operator logika umumnya digunakan untuk membuat ekspresi logika yang kompleks dalam kondisi percabangan dan perulangan dalam pemrograman C++.

Berikut adalah operator logika yang umum digunakan dalam C++:

- AND (&&): Operator ini menghasilkan nilai true jika kedua ekspresi boolean di sebelah kiri dan kanan operator AND bernilai true. Jika salah satu atau kedua ekspresi tersebut bernilai false, hasilnya akan false.

- OR (||): Operator ini menghasilkan nilai true jika salah satu dari kedua ekspresi boolean di sebelah kiri atau kanan operator OR bernilai true. Jika kedua ekspresi tersebut bernilai false, hasilnya akan false.

- NOT (!): Operator ini menghasilkan nilai true jika ekspresi boolean di sebelah kanan operator NOT bernilai false, dan sebaliknya.

*/

int main()
{
    int a = 5;
    int b = 3;
    int c = 7;

    // Operator AND
    bool hasil_and = (a > b) && (b < c);
    cout << "Hasil dari (a > b) && (b < c): " << hasil_and << endl; // Output: 1 (true)

    // Operator OR
    bool hasil_or = (a > b) || (b > c);
    cout << "Hasil dari (a > b) || (b > c): " << hasil_or << endl; // Output: 1 (true)

    // Operator NOT
    bool hasil_not = !(a > b);
    cout << "Hasil dari !(a > b): " << hasil_not << endl; // Output: 0 (false)

    return 0;
}

/*

Penjelasan:

- Kita deklarasikan tiga variabel a, b, dan c dengan nilai masing-masing 5, 3, dan 7.
- Kemudian, kita gunakan operator logika untuk membandingkan nilai-nilai variabel tersebut.
- Setiap hasil evaluasi logika disimpan dalam variabel boolean dan kemudian dicetak untuk dilihat hasilnya.
- Output yang dihasilkan akan menunjukkan nilai boolean baru berdasarkan hasil evaluasi logika dari ekspresi yang diberikan.

*/