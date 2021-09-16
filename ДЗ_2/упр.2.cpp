#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    vector <double> arr;
    double a; //     а - промежуточная переменная
    int l, k, j;
    cout << "Введите длину массива: " << endl;
    cin >> l;
    cout << "Введите элементы массива (раздельно): " << endl;

    for (int i = 0; i < l; i++){
        cin >> a;
        arr.push_back(a);
    }

    for (int i = 1; i < l; i++){
        a = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > a)){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j+1] = a;
    }

    cout << "Отсортированный массив: " << endl;
    for(int i = 0; i < l; i++){
        cout << arr[i] << " ";
    }


    return 0;
}