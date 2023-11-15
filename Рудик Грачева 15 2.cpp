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

    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += myArray[i];
    }

    cout << "Сумма элементов массива: " << sum << endl;

    return 0;
}