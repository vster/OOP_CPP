#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <string> vectStrings;
	string word;
	char ch;

	do {
		cout << "Enter word: ";
		cin >> word;
		vectStrings.push_back(word);
		cout << "Continue (y/n)? ";
		cin >> ch;
	} while ( ch == 'y');
	sort(vectStrings.begin(), vectStrings.end());

	for (int i = 0; i < vectStrings.size(); i++)
		cout << vectStrings[i] << endl;

	return 0;
}

