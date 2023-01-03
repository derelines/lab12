#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;


void calendar() {

    setlocale(LC_ALL, "Russian");

    int day, week, year;
    int days_in_months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string months[12] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������","�������" };
    cout << "������� ���: ";
    cin >> year;
    system("cls");

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) { // �������� �� ������������ 
        days_in_months[1] = 29;
    }

    for (int i = 0; i <= 11; ++i) {
        cout << "---------------------------------\n";
        cout << "          " << months[i] << ", " << year << ".\n";
        cout << "��   ��   ��   ��   ��   ��   ��\n";

        for (int j = 1; j <= days_in_months[i]; ++j)
        {
            cout << j << "    ";
            if ((days_in_months[i] + j) % 7 == 0)
                cout << endl;
        }



        cout << "\n";

    }
    cout << "\n";
    system("pause");
}