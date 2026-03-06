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

void bubbleSort() {    // prosedur untuk mengurutkan array
        cout << "\n===================" << endl;
        cout << "Hasil Setiap Pass" << endl;
        cout << "\n===================" << endl;
    for (int pass = 1; pass < n; pass++) {        // looping
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "Pass ke-" << pass << ":\t";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    input();
    bubbleSort();
    display();
    return 0;
}