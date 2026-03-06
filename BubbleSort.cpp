#include <iostream>
using namespace std;

int a[20];							// Deklarasi array a dengan ukuran 20
int n;								// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() { // procedur unutk input

    while (true) {      // looping
        cout << "Masukan banyaknya elemen pada array : ";       // Output ke layar
        cin >> n;       // Input dari pengguna

        if (n <= 20)    // Jika n kurang dari atau sama dengan 20
            break;      // Keluar dari loop
        else            // Jika n lebih dari 20
            cout << "\nMaksimal Input Array adalah 20!\n";  // Output ke layar
    }

    cout << endl;       // Output baris kosong
    cout << "==================" << endl;       // Output ke layar
    cout << "Masukan Elemen Array" << endl;     // Output ke layar
    cout << "==================" << endl;       // Output ke layar

    for (int i = 0; i < n; i++) {       // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << " : ";     // Output ke layar
        cin >> a[i];        // Input dari pengguna
    }
}

    void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen Array yang belum disusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}