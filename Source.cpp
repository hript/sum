#include <iostream>
#include <string>

using namespace std;

int main() {
	string first;
	string second;
	string result;
	cout << "First number" << endl;
	cin >> first;

	cout << "Second number" << endl;
	cin >> second;

	string maxString;
	string minString;
	if (first.size() > second.size()) {
		maxString = first;
		minString = second;
	}
	else {
		maxString = second;
		minString = first;
	}


	return 0;
}