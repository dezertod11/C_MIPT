#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    int n;
    double p;

    cout << "Выберите величину, переводимую из СИ в СГС:" << endl;
    cout << "1: электрический заряд, Кл в Фр \n" << "2: сила тока, А в Фр/c \n" << "3: напряжение, В в статВ\n" <<"4:напржённость эл.поля, В/м = Н/Кл в статВ/см\n" <<"5: магнитная индукция, Тл в Гс \n" << endl;
    cin >> n;
    cout << "Введите число, которое хотите перевести:" << endl;
    cin >> p;
    switch (n) {
        case(1):
            cout << "Число в СГС: " << p * (pow(10, -1)) << "*c  Фр" << endl;
            break;
        case(2):
            cout << "Число в СГС: " << p * (pow(10, -1)) << "*c  Фр*с^(-1)" << endl;
            break;
        case(3):
            cout << "Число в СГС: " << p * (pow(10, 8)) << "/c  статВ" << endl;
            break;
        case(4):
            cout << "Число в СГС: " << p * (pow(10, 6)) << "/c  статВ/см" << endl;
            break;
        case(5):
            cout << "Число в СГС: " << p * (pow(10, 4)) << " Гс" << endl;
            break;
    }

    cout << "Где с - скорость света в вакууме";
    return 0;
}