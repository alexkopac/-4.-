#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, x;
    cout << "Введіть дробовий коефіцієнт a: ";
    cin >> a;
    cout << "Введіть дробовий коефіцієнт b: ";
    cin >> b;

    if (a > b) {
        x = b - 5 * a;
        cout << "X = " << x << endl;
    } else if (a == b) {
        if (a == 0) {
            cout << "Помилка: ділення на нуль (a = 0)." << endl;
        } else {
            x = (5 - b) / a;
            cout << "X = " << x << endl;
        }
    } else {
        if (b == 0) {
            cout << "Помилка: ділення на нуль (b = 0)." << endl;
        } else {
            x = (a - 5) / b;
            cout << "X = " << x << endl;
        }
    }

    return 0;
}