#include <iostream>
#include <locale>
#include <Windows.h> 
#include <new>
#include <fstream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "Grib.h"
#include "Forest.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	cout << endl;
	vector<string> v(6);

	wcout << L"       Привіт людино! Ти у лісі. Твоя задача зібрати 7 грибочків, нумо обирати!" << endl;
	Forest JLic;
	if (JLic.loadGribsFromFile("gribo4ek.txt")) {
		JLic.startGame();
	}
	return 0;
};
