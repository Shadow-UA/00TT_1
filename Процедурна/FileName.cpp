#include <iostream>
#include <locale>
#include <Windows.h> 
#include <new>
#include <fstream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	cout << endl;

	wcout << L"       ����� ������! �� � ��. ���� ������ ������ 7 ��������, ���� �������!" << endl;
	start("gribo4ek.txt");

	return 0;
};
