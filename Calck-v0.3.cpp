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
    cout << "Features: Basic operations + extras (modulus, power, root, average, etc.)\n";
    cout << "Calck is a simple calculator plugin based on the C++ console.\n";
    cout << "This initial version is designed to provide basic calculator functions with a minimalistic design and lightweight performance.\n";
    cout << "In the future, I hope to create a game called Clack :)\n";

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
    cout << "Choose Operation:\n";
    cout << "+    : Addition\n";
    cout << "-    : Subtraction\n";
    cout << "*    : Multiplication\n";
    cout << "/    : Division\n";
    cout << "%    : Modulus (remainder)\n";
    cout << "^    : Power\n";
    cout << "sqrt : Square root\n";
    cout << "avg  : Average\n";
    cout << "max  : Maximum\n";
    cout << "min  : Minimum\n";
    cout << "Enter your choice: ";
    cin >> pilihan;

    int n;
    vector<double> angka;

    if (pilihan == "sqrt") {
        double x;
        cout << "Enter a number: ";
        cin >> x;
        if (x >= 0) cout << "Square root: " << sqrt(x) << "\n";
        else cout << "Error: Cannot calculate square root of a negative number!\n";
    }
    else if (pilihan == "^") {
        double a, b;
        cout << "Enter base: ";
        cin >> a;
        cout << "Enter exponent: ";
        cin >> b;
        cout << "Result: " << pow(a, b) << "\n";
    }
    else if (pilihan == "%" ) {
        int a, b;
        cout << "Enter number 1: ";
        cin >> a;
        cout << "Enter number 2: ";
        cin >> b;
        if (b != 0) cout << "Result: " << a % b << "\n";
        else cout << "Error: Cannot modulo by zero!\n";
    }
    else {
        cout << "How many numbers do you want to operate on: ";
        cin >> n;
        angka.resize(n);
        for (int i = 0; i < n; i++) {
            cout << "Enter number " << i+1 << ": ";
            cin >> angka[i];
        }

        double hasil = angka[0];

        if (pilihan == "+") {
            for (int i = 1; i < n; i++) hasil += angka[i];
            cout << "Result: " << hasil << "\n";
        } 
        else if (pilihan == "-") {
            for (int i = 1; i < n; i++) hasil -= angka[i];
            cout << "Result: " << hasil << "\n";
        } 
        else if (pilihan == "*") {
            for (int i = 1; i < n; i++) hasil *= angka[i];
            cout << "Result: " << hasil << "\n";
        } 
        else if (pilihan == "/") {
            for (int i = 1; i < n; i++) {
                if (angka[i] != 0) hasil /= angka[i];
                else {
                    cout << "Error: Cannot divide by zero!\n";
                    hasil = numeric_limits<double>::quiet_NaN();
                    break;
                }
            }
            if (!isnan(hasil)) cout << "Result: " << hasil << "\n";
        }
        else if (pilihan == "avg") {
            double sum = 0;
            for (double x : angka) sum += x;
            cout << "Average: " << sum / n << "\n";
        }
        else if (pilihan == "max") {
            double maks = angka[0];
            for (int i = 1; i < n; i++) if (angka[i] > maks) maks = angka[i];
            cout << "Maximum: " << maks << "\n";
        }
        else if (pilihan == "min") {
            double mins = angka[0];
            for (int i = 1; i < n; i++) if (angka[i] < mins) mins = angka[i];
            cout << "Minimum: " << mins << "\n";
        }
        else {
            cout << "Invalid operation!\n";
        }
    }

    cout << "\nDo you want to calculate again? (y/n): ";
    cin >> ulang;
    cout << "\n";

} while (ulang == 'y' || ulang == 'Y');

cout << "Thank you for using Calck!\n";
return 0;
}
