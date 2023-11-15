#include <iostream>
using namespace std;


int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

int main() {
    setlocale(0, "");
    int num;
    cout << "Введите число: ";
    cin >> num;

    int digits = countDigits(num);
    cout << "Количество цифр в числе " << num << " : " << digits << endl;

    return 0;
}