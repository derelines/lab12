#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

void time()
{

	setlocale(LC_ALL, "Russian");

	time_t now = time(0);

	char* dt = ctime(&now);

	cout << "������� ���� � �����: " << dt;

	cout << endl;

	cout << "�������� ���!!!" << endl;

}