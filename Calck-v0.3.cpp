#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

void Judul() {
    int h = 7; // tinggi
    int w = 7; // lebar

    for (int i = 0; i < h; i++) {
        // Huruf C 
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0) cout << "#";
            else cout << " ";
        }
        cout << "  ";

        // Huruf A
        for (int j = 0; j < w; j++) {
            if (i == 0 || j == 0 || j == w - 1 || i == h / 2) cout << "#";
            else cout << " ";
        }
        cout << "  ";

        // Huruf L
        for (int j = 0; j < w; j++) {
            if (j == 0 || i == h - 1) cout << "#";
            else cout << " ";
        }
        cout << "  ";

        // Huruf C
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0) cout << "#";
            else cout << " ";
        }
        cout << "  ";

        // Huruf K
        for (int j = 0; j < w; j++) {
            if (j == 0 || (i + j == h / 2) || (i - j == h / 2 - 1)) cout << "#";
            else cout << " ";
        }
        cout << endl;
    }
}

void LayDes() {
    cout << "\n";
    for (int i = 0; i < 41; i++) {
        cout << "=";
    }
    cout << "\n";
    cout << "Version: 0.1 (Beta)\n";
    cout << "Author: RE33\n";
    cout << "Fitur  : Operasi dasar + tambahan (modulus, pangkat, akar, rata-rata, dll)\n";
    cout << "Calck is a simple calculator plugin based on the C++ console.\n";
    cout << "This initial version is designed to provide basic calculator functions with a minimalistic design and lightweight performance.\n";
    cout << "Harapannya kedepannya saya bakal buat game dengan nama Clack :)\n";
    for (int i = 0; i < 126; i++) {
        cout << "=";
    }
    cout << "\n\n";
}

int main() {
    Judul();
    LayDes();

    string pilihan;
    char ulang;

    do {
        cout << "Pilih Operasi:\n";
        cout << "+    : Tambah\n";
        cout << "-    : Kurang\n";
        cout << "*    : Kali\n";
        cout << "/    : Bagi\n";
        cout << "%    : Modulus (sisa bagi)\n";
        cout << "^    : Pangkat\n";
        cout << "sqrt : Akar kuadrat\n";
        cout << "avg  : Rata-rata\n";
        cout << "max  : Angka terbesar\n";
        cout << "min  : Angka terkecil\n";
        cout << "Masukan pilihan: ";
        cin >> pilihan;

        int n;
        vector<double> angka;

        if (pilihan == "sqrt") {
            double x;
            cout << "Masukan angka: ";
            cin >> x;
            if (x >= 0) cout << "Hasil akar: " << sqrt(x) << "\n";
            else cout << "Error: Tidak bisa akar negatif!\n";
        }
        else if (pilihan == "^") {
            double a, b;
            cout << "Masukan basis: ";
            cin >> a;
            cout << "Masukan pangkat: ";
            cin >> b;
            cout << "Hasil: " << pow(a, b) << "\n";
        }
        else if (pilihan == "%" ) {
            int a, b;
            cout << "Masukan bilangan 1: ";
            cin >> a;
            cout << "Masukan bilangan 2: ";
            cin >> b;
            if (b != 0) cout << "Hasil: " << a % b << "\n";
            else cout << "Error: Modulo dengan nol tidak bisa!\n";
        }
        else {
            cout << "Mau berapa angka yang ingin dioperasikan: ";
            cin >> n;
            angka.resize(n);
            for (int i = 0; i < n; i++) {
                cout << "Masukan angka ke-" << i+1 << ": ";
                cin >> angka[i];
            }

            double hasil = angka[0];

            if (pilihan == "+") {
                for (int i = 1; i < n; i++) hasil += angka[i];
                cout << "Hasil: " << hasil << "\n";
            } 
            else if (pilihan == "-") {
                for (int i = 1; i < n; i++) hasil -= angka[i];
                cout << "Hasil: " << hasil << "\n";
            } 
            else if (pilihan == "*") {
                for (int i = 1; i < n; i++) hasil *= angka[i];
                cout << "Hasil: " << hasil << "\n";
            } 
            else if (pilihan == "/") {
                for (int i = 1; i < n; i++) {
                    if (angka[i] != 0) hasil /= angka[i];
                    else {
                        cout << "Error: Pembagian dengan nol tidak bisa!\n";
                        hasil = numeric_limits<double>::quiet_NaN();
                        break;
                    }
                }
                if (!isnan(hasil)) cout << "Hasil: " << hasil << "\n";
            }
            else if (pilihan == "avg") {
                double sum = 0;
                for (double x : angka) sum += x;
                cout << "Rata-rata: " << sum / n << "\n";
            }
            else if (pilihan == "max") {
                double maks = angka[0];
                for (int i = 1; i < n; i++) if (angka[i] > maks) maks = angka[i];
                cout << "Maksimum: " << maks << "\n";
            }
            else if (pilihan == "min") {
                double mins = angka[0];
                for (int i = 1; i < n; i++) if (angka[i] < mins) mins = angka[i];
                cout << "Minimum: " << mins << "\n";
            }
            else {
                cout << "Operasi tidak valid!\n";
            }
        }

        cout << "\nApakah Anda ingin menghitung lagi? (y/n): ";
        cin >> ulang;
        cout << "\n";

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih sudah menggunakan Calck!\n";
    return 0;
}

