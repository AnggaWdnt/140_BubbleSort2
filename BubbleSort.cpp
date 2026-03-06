#include <iostream>
using namespace std;

int a[20];							// Deklarasi array a dengan ukuran 20
int n;								// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {

    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimal Input Array adalah 20\n";
    }

    cout << endl;
    cout << "==================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> a[i];
    }
}