#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    double x, y;
    cout << "Введите переменную x для обмена c y: " << endl;
    cin >> x;
    cout << "Введите переменную y для обмена c x: " << endl;
    cin >> y;

    x += y;
    y = x - y;
    x -= y;

    cout << "x = " << x << "\ny = " << y << endl;
    return 0;
}