#include <iostream>
#include <string>
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
    cout << "Calck is a simple calculator plugin based on the C++ console.\n";
    cout << "This initial version is designed to provide basic calculator functions with a minimalistic design and lightweight performance.\n";
    cout << "Harapannya kedepannya saya bakal buat game dengan nama Clack :)\n";
    for (int i = 0; i < 126; i++) {
        cout << "=";
    }
    cout << "\n\n";
}

void tambah() {
    int B1, B2;
    cout << "Masukan B1: ";
    cin >> B1;
    cout << "Masukan B2: ";
    cin >> B2;
    int Hasil = B1 + B2;
    cout << "Hasil: " << Hasil << "\n";
}

void kurang() {
    int B1, B2;
    cout << "Masukan B1: ";
    cin >> B1;
    cout << "Masukan B2: ";
    cin >> B2;
    int Hasil = B1 - B2;
    cout << "Hasil: " << Hasil << "\n";
}

void kali() {
    int B1, B2;
    cout << "Masukan B1: ";
    cin >> B1;
    cout << "Masukan B2: ";
    cin >> B2;
    int Hasil = B1 * B2;
    cout << "Hasil: " << Hasil << "\n";
}

void bagi() {
    int B1, B2;
    cout << "Masukan B1: ";
    cin >> B1;
    cout << "Masukan B2: ";
    cin >> B2;
    if (B2 != 0) {
        double Hasil = (double)B1 / B2;
        cout << "Hasil: " << Hasil << "\n";
    } else {
        cout << "Error: Pembagian dengan nol tidak bisa!\n";
    }
}
void Penentu(){
    if (pilihan == "+") {
        tambah();
    } else if (pilihan == "-") {
        kurang();
    } else if (pilihan == "*") {
        kali();
    } else if (pilihan == "/") {
        bagi();
    } else {
        cout << "Operasi tidak valid!\n";
    }

}

int main() {
    Judul();
    LayDes();

    cout << "Pilih Operasi Bilangan:\n";
    cout << "1. + (Tambah)\n";
    cout << "2. - (Kurang)\n";
    cout << "3. * (Kali)\n";
    cout << "4. / (Bagi)\n";
    cout << "apakah mau angka yang ingin dioperasikan: \n";
    cout << "mau berapa:\n";

    string pilihan;
    cin >> pilihan;

    if (pilihan == "+") {
        tambah();
    } else if (pilihan == "-") {
        kurang();
    } else if (pilihan == "*") {
        kali();
    } else if (pilihan == "/") {
        bagi();
    } else {
        cout << "Operasi tidak valid!\n";
    }

    return 0;
}
