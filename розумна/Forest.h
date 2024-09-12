#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Grib.h"
#include <memory>

class Forest {
public:
	Forest();
	~Forest();

	void createGrib(unique_ptr<Grib>);
	bool loadGribsFromFile(const string&);
	void startGame();

private:
	vector<unique_ptr<Grib>> gribs;
};
