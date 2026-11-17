#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int year;
    cout << "Введіть рік: ";
    cin >> year;

    if (year <= 0) {
        cout << "Помилка: рік має бути додатним цілим числом." << endl;
    } else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " — високосний рік." << endl;
    } else {
        cout << year << " — не високосний рік." << endl;
    }

    return 0;
}