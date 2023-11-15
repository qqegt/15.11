#include <iostream>

int main() {
    using namespace std;
    setlocale(0, "");
    double number;

    cout << "Введите число: ";
    cin >> number;

    if (number > 0) {
        cout << "Число является положительным.\n";
    }
    else if (number < 0) {
        cout << "Число является отрицательным.\n";
    }
    else {
        cout << "Число равно нулю.\n";
    }

    return 0;
}