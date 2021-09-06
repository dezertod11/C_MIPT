#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c, D;
    cout << "ВВедите коэффициенты квадратного уравнения"<< endl;
    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;

    D = (pow(b,2) - 4*a*c);
    if(D > 0) {
        cout << "Найдено два решения: " << (-b + sqrt(D)) / (2 * a) << " " << (-b - sqrt(D)) / (2 * a) << endl;
    } else if(D == 0) {
        cout << "Найдено одно решение: " << (-b) / (2 * a) << endl;
    } else {
        cout << "Решений нет((" << endl;
    }

    return 0;
}