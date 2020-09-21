#include <iostream>
#include <string>

using namespace std;

void reverse(string& s) {

	for (int i = 0; i < s.size() / 2; i++) {
		swap(s[i], s[s.size() - i - 1]);
	}

}

string result(const string& first, const string& second) {

	int maxSize = first.size() > second.size() ? first.size() : second.size();
	int minSize = first.size() > second.size() ? second.size() : first.size();
	string maxString = first.size() > second.size() ? first : second;
	string minString = first.size() < second.size() ? first : second;
	string res;

	int dec = 0;
	int ans;

	for (int i = 0; i < maxSize; i++) {
		if (i <= minSize - 1) {
			ans = maxString[maxSize - i - 1] - '0' + minString[minSize - i - 1] - '0' + dec;
		}
		else {
			ans = maxString[maxSize - i - 1] - '0' + dec;
		}
		dec = ans / 10;
		res += ans % 10 + '0';
	}

	if (dec > 0) res += dec + '0';

	reverse(res);

	return res;
}

int main() {

	string first, second;

	cin >> first >> second;

	cout << result(first, second);



	return 0;
}