#include "Grib.h"

Grib::Grib(string Name1, bool FoodIndex1) : Name(Name1), FoodIndex(FoodIndex1) {
}
Grib::~Grib() {}
bool Grib::GetFoodIndex() { return FoodIndex; };
string Grib::GetName() { return Name; }
void Grib::WriteName() const {
	cout << Name;
}
