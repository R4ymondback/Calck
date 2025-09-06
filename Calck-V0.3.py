import math

def judul():
    h = 7
    w = 7
    for i in range(h):
        # Huruf C
        for j in range(w):
            if i == 0 or i == h - 1 or j == 0:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Huruf A
        for j in range(w):
            if i == 0 or j == 0 or j == w - 1 or i == h // 2:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Huruf L
        for j in range(w):
            if j == 0 or i == h - 1:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Huruf C
        for j in range(w):
            if i == 0 or i == h - 1 or j == 0:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Huruf K
        for j in range(w):
            if j == 0 or (i + j == h // 2) or (i - j == h // 2 - 1):
                print("#", end="")
            else:
                print(" ", end="")
        print()


def laydes():
    print("\n" + "=" * 41)
    print("Version: 0.1 (Beta)")
    print("Author : RE33")
    print("Fitur  : Operasi dasar + tambahan (modulus, pangkat, akar, rata-rata, dll)")
    print("Calck is a simple calculator plugin based on the Python console.")
    print("This initial version is designed to provide basic calculator functions with a minimalistic design and lightweight performance.")
    print("Harapannya kedepannya saya bakal buat game dengan nama Clack :)")
    print("=" * 126 + "\n")


def kalkulator():
    while True:
        print("Pilih Operasi:")
        print("+    : Tambah")
        print("-    : Kurang")
        print("*    : Kali")
        print("/    : Bagi")
        print("%    : Modulus (sisa bagi)")
        print("^    : Pangkat")
        print("sqrt : Akar kuadrat")
        print("avg  : Rata-rata")
        print("max  : Angka terbesar")
        print("min  : Angka terkecil")

        pilihan = input("Masukan pilihan: ")

        if pilihan == "sqrt":
            x = float(input("Masukan angka: "))
            if x >= 0:
                print("Hasil akar:", math.sqrt(x))
            else:
                print("Error: Tidak bisa akar negatif!")

        elif pilihan == "^":
            a = float(input("Masukan basis: "))
            b = float(input("Masukan pangkat: "))
            print("Hasil:", pow(a, b))

        elif pilihan == "%":
            a = int(input("Masukan bilangan 1: "))
            b = int(input("Masukan bilangan 2: "))
            if b != 0:
                print("Hasil:", a % b)
            else:
                print("Error: Modulo dengan nol tidak bisa!")

        else:
            n = int(input("Mau berapa angka yang ingin dioperasikan: "))
            angka = [float(input(f"Masukan angka ke-{i+1}: ")) for i in range(n)]

            hasil = angka[0]

            if pilihan == "+":
                for i in range(1, n):
                    hasil += angka[i]
                print("Hasil:", hasil)

            elif pilihan == "-":
                for i in range(1, n):
                    hasil -= angka[i]
                print("Hasil:", hasil)

            elif pilihan == "*":
                for i in range(1, n):
                    hasil *= angka[i]
                print("Hasil:", hasil)

            elif pilihan == "/":
                for i in range(1, n):
                    if angka[i] != 0:
                        hasil /= angka[i]
                    else:
                        print("Error: Pembagian dengan nol tidak bisa!")
                        hasil = None
                        break
                if hasil is not None:
                    print("Hasil:", hasil)

            elif pilihan == "avg":
                print("Rata-rata:", sum(angka) / n)

            elif pilihan == "max":
                print("Maksimum:", max(angka))

            elif pilihan == "min":
                print("Minimum:", min(angka))

            else:
                print("Operasi tidak valid!")

        ulang = input("\nApakah ingin menghitung lagi? (y/n): ")
        if ulang.lower() != "y":
            break

    print("Terima kasih sudah menggunakan Calck!")


if __name__ == "__main__":
    judul()
    laydes()
    kalkulator()
