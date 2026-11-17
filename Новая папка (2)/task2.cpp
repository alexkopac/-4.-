#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, y;
    cout << "Введіть ціле число X: ";
    cin >> x;
    cout << "Введіть ціле число Y: ";
    cin >> y;

    if (y == 0) {
        cout << "Помилка: ділення на нуль неможливе." << endl;
    } else if (x % y == 0) {
        cout << "Число " << x << " кратне числу " << y << "." << endl;
    } else {
        cout << "Число " << x << " НЕ кратне числу " << y << "." << endl;
    }

    return 0;
}