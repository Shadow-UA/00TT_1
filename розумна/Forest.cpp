#include "Forest.h"

Forest::Forest()
{
}

Forest::~Forest()
{
}


void Forest::createGrib(unique_ptr<Grib> grib) {
	gribs.push_back(move(grib));
}

bool Forest::loadGribsFromFile(const string& filename)
{
	ifstream MyFile(filename);
	if (!MyFile) {
		std::cerr << "Can't open MyFile: " << filename << endl;
		return false;
	}
	string GribName;
	string FoodIndex;
	while (getline(MyFile, GribName) && getline(MyFile, FoodIndex)) {
		auto Gribo4ek = make_unique<Grib>(GribName, stoi(FoodIndex));
		createGrib(move(Gribo4ek));
	}
	MyFile.close();
	return true;
}


void Forest::startGame()
{
	int amountOfGood = 0;
	string a;
	for (auto& grib : gribs) {
		cout << "We wanna pick this little ";
		grib->WriteName();
		cout << "? If yes press 1, if no 0." << endl;

		getline(cin, a);
		if (stoi(a) == grib->GetFoodIndex()) {
			cout << "Oh no, bad choice!" << endl;
		}
		else {
			cout << "Yeeeeahhh best one!!!!" << endl;
			amountOfGood++;
		}
		cout << std::endl;
	}
	double score = (double)amountOfGood / gribs.size();
	cout << "Your score:" << score * 100 << "%" << endl;

}


