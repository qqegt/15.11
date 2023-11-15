#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    const int arraySize = 5;
    int myArray[arraySize];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> myArray[i];
    }

    int product = 1;
    for (int i = 0; i < arraySize; ++i) {
        product *= myArray[i];
    }

    cout << "Произведение элементов массива: " << product << endl;

    return 0;
}