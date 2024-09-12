#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Grib.h"

class Forest {
public:
	Forest();
	~Forest();

	void createGrib(const Grib&);
	bool loadGribsFromFile(const string&);
	void startGame();

private:
	vector<Grib> gribs;
};
