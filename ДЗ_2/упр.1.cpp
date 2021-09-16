#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int l, pos;
    string text, a;                     // text - вводимый текст. а - промежуточная переменная
    cout << "Введите экспортируемый текст:" << endl;
    getline(cin, text);
    vector <string> array;       // выводимый вектор
    l = text.length(); //        l = длина text
    for(int i = 0; i < l; i++){ //
        if(isalpha(text[i])){
            a += text[i];
//            cout << 1;
        }
        else if(text[i] == ' '){
            if (a != "") {
                array.push_back(a);
            }
            a = "";
//            cout << 2;
        }
        else if ((text[i] == '-') && isalpha(text[i+1])) {
            a += text[i];
            continue;
        }
        else{
            if (a != "") {
                array.push_back(a);
//              cout << 3;
            }
            array.push_back(a = text[i]);
            a = "";
        }
    }
    array.push_back(a);

    cout << "Экспортированный текст:" << endl;
    for(int i = 0; i < array.size(); i++) {
        cout << array[i] << ' ';
    }

    return 0;
}
