import math

def title():
    h = 7
    w = 7
    for i in range(h):
        # Letter C
        for j in range(w):
            if i == 0 or i == h - 1 or j == 0:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Letter A
        for j in range(w):
            if i == 0 or j == 0 or j == w - 1 or i == h // 2:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Letter L
        for j in range(w):
            if j == 0 or i == h - 1:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Letter C
        for j in range(w):
            if i == 0 or i == h - 1 or j == 0:
                print("#", end="")
            else:
                print(" ", end="")
        print("  ", end="")

        # Letter K
        for j in range(w):
            if j == 0 or (i + j == h // 2) or (i - j == h // 2 - 1):
                print("#", end="")
            else:
                print(" ", end="")
        print()


def description():
    print("\n" + "=" * 41)
    print("Version: 0.1 (Beta)")
    print("Author : RE33")
    print("Features: Basic operations + extras (modulus, power, root, average, etc.)")
    print("Calck is a simple calculator plugin based on the Python console.")
    print("This initial version is designed to provide basic calculator functions with a minimalistic design and lightweight performance.")
    print("In the future, I hope to create a game called Clack :)")
    print("=" * 126 + "\n")


def calculator():
    while True:
        print("Choose Operation:")
        print("+    : Addition")
        print("-    : Subtraction")
        print("*    : Multiplication")
        print("/    : Division")
        print("%    : Modulus (remainder)")
        print("^    : Power")
        print("sqrt : Square root")
        print("avg  : Average")
        print("max  : Maximum")
        print("min  : Minimum")

        choice = input("Enter your choice: ")

        if choice == "sqrt":
            x = float(input("Enter a number: "))
            if x >= 0:
                print("Square root:", math.sqrt(x))
            else:
                print("Error: Cannot calculate square root of a negative number!")

        elif choice == "^":
            a = float(input("Enter base: "))
            b = float(input("Enter exponent: "))
            print("Result:", pow(a, b))

        elif choice == "%":
            a = int(input("Enter number 1: "))
            b = int(input("Enter number 2: "))
            if b != 0:
                print("Result:", a % b)
            else:
                print("Error: Cannot modulo by zero!")

        else:
            n = int(input("How many numbers do you want to operate on: "))
            numbers = [float(input(f"Enter number {i+1}: ")) for i in range(n)]

            result = numbers[0]

            if choice == "+":
                for i in range(1, n):
                    result += numbers[i]
                print("Result:", result)

            elif choice == "-":
                for i in range(1, n):
                    result -= numbers[i]
                print("Result:", result)

            elif choice == "*":
                for i in range(1, n):
                    result *= numbers[i]
                print("Result:", result)

            elif choice == "/":
                for i in range(1, n):
                    if numbers[i] != 0:
                        result /= numbers[i]
                    else:
                        print("Error: Cannot divide by zero!")
                        result = None
                        break
                if result is not None:
                    print("Result:", result)

            elif choice == "avg":
                print("Average:", sum(numbers) / n)

            elif choice == "max":
                print("Maximum:", max(numbers))

            elif choice == "min":
                print("Minimum:", min(numbers))

            else:
                print("Invalid operation!")

        again = input("\nDo you want to calculate again? (y/n): ")
        if again.lower() != "y":
            break

    print("Thank you for using Calck!")


if __name__ == "__main__":
    title()
    description()
    calculator()
