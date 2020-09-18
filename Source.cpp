#include <iostream>
#include <string>

using namespace std;

void reverseString(string& s) {

	for (long long int i = 0; i < s.size() / 2; i++) {
		swap(s[i], s[s.size() - 1 - i]);
	}

}

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

	reverseString(maxString);
	reverseString(minString);

	return 0;
}