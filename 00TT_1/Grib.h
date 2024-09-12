#pragma once
#include <iostream>
#include <locale>
#include <Windows.h> 
#include <new>
#include <fstream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


class Grib{
public:
	Grib(string,bool);
	~Grib();
	bool GetFoodIndex();
	string GetName();
	void WriteName() const;
private:
	string Name;
	bool FoodIndex;
	
};

