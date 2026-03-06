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

    void display() {        // Prosedur untuk menampilkan isi array
	cout << endl;           // Baris kosong
	cout << "============================" << endl;     // Garis pemisah
	cout << "Elemen Array yang belum disusun" << endl;      // Judul tampilan array
	cout << "============================" << endl;     // Garis pemisah
	for (int j = 0; j < n; j++) {       // Perulangan untuk menampilkan semua elemen array
		cout << a[j] << endl;           // Menampilkan nilai array pada indeks j
	}
	cout << endl;       // Baris kosong
}

void bubbleSort() {    // prosedur untuk mengurutkan array
        cout << "\n===================" << endl;        // Garis pemisah
        cout << "Hasil Setiap Pass" << endl;            // Judul proses sorting
        cout << "\n===================" << endl;        // Garis pemisah
    for (int pass = 1; pass < n; pass++) {        // looping
        for (int j = 0; j <= n - 1 - pass; j++) {   // Membandingkan elemen yang bersebelahan
            if (a[j] > a[j + 1]) {      // Jika elemen kiri lebih besar dari kanan
                int temp = a[j];        // Simpan nilai a[j] ke variabel sementara
                a[j] = a[j + 1];        // Tukar nilai a[j] dengan a[j+1]
                a[j + 1] = temp;        // Simpan nilai lama ke posisi berikutnya
            }
        }
        cout << "Pass ke-" << pass << ":\t";        // Menampilkan pass ke berapa
        for (int k = 0; k < n; k++) {       // Perulangan untuk menampilkan isi array
            cout << a[k] << " ";            // Menampilkan elemen array setelah pass
        }
        cout << endl;       // Pindah baris setelah menampilkan satu pass
    }
}

int main()
{
    input();
    bubbleSort();
    display();
    return 0;
}