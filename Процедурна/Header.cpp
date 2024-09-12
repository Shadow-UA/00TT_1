#include "Header.h"

int start(const string& filename)
{
	vector<int> FoodIndexs;
	vector<string> names;
	loadFromFile(filename, FoodIndexs, names);
	int amountOfGood = 0;
	string a;

	for (int i = 0; i < names.size(); ++i) {
		cout << "We wanna pick this little ";
		cout<<names[i];
		cout << "? If yes press 1, if no 0." << endl;

		getline(cin, a);
		if (stoi(a) == FoodIndexs[i]) {
			cout << "Oh no, bad choice!" << endl;
		}
		else {
			cout << "Yeeeeahhh best one!!!!" << endl;
			amountOfGood++;
		}
		cout << std::endl;
	}

	double score = (double)amountOfGood / names.size();
	cout << "Your score:" << score * 100 << "%" << endl;
	return 1;
}
