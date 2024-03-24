// Latihan Rekursif Faktorial

#include <iostream>
using namespace std;

// Deklarasi fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    // Kasus dasar: faktorial dari 0 adalah 1
    if (n == 0)
        return 1;
    // Langkah rekursif: faktorial dari n adalah n dikali faktorial dari (n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Masukkan angka untuk menghitung faktorial: ";
    cin >> num;

    // Memanggil fungsi rekursif untuk menghitung faktorial
    cout << "Faktorial dari " << num << " adalah: " << factorial(num) << endl;

    return 0;
}
