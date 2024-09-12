#include "loadFromFile.h"

int loadFromFile(const string& filename,vector<int>& FoodIndexs, vector<string>& names)
{
	ifstream MyFile(filename);
	if (!MyFile) {
		std::cerr << "Can't open MyFile: " << filename << endl;
		return false;
	}
	string GribName;
	string FoodIndex;
	while (getline(MyFile, GribName) && getline(MyFile, FoodIndex)) {
		FoodIndexs.push_back(stoi(FoodIndex));
		names.push_back(GribName);
	}
	MyFile.close();
	return true;

}
