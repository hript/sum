#include <iostream>
#include <string>

using namespace std;

void reverseString(string& s) {

	for (long long int i = 0; i < s.size() / 2; i++) {
		swap(s[i], s[s.size() - 1 - i]);
	}

}

void pushZeros(string& minString, const string& maxString) {

	int i = minString.size();

	while (i < maxString.size()) {
		minString += '0';
		i += 1;
	}

}

string sum(const string& minString, const string& maxString) {
	string result;

	char dec = '0';
	char units = '0';

	for (long long int i = 0; i < maxString.size(); i++) {

		int x = dec - '0' + maxString[i] - '0' + minString[i] - '0';

		dec = x / 10 + '0';
		units = x % 10 + '0';

		result += units;

	}
	if (dec != '0') {
		result += dec;
	}

	return result;
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

	pushZeros(minString, maxString);

	result = sum(minString, maxString);

	reverseString(result);


	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
	}
	cout << endl;


	return 0;
}