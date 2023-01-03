using namespace std;
#include <windows.h> 
#include "календарь_и_время.h"
#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    int number;

    do {

        cout << "Что вы хотите сделать?(1-открыть календарь; 2-узнать текущую дату и время)" << endl;

        cin >> number;
        switch (number) {

        case 1:

           calendar();

            break;

        case 2:

            time();

            break;

        default:

            cout << "Проверьте введенное значение!" << endl;

        }

    } while (number != 2);

}