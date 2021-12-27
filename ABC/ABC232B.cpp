#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, t;
	getline(cin, s);
	getline(cin, t);

	int s_length = s.size();
	for (int i = 0; i < 26; i++) {
		if (s == t) {
			cout << "Yes" << endl;
			return 0;
		}
		for (int j = 0; j < s_length; j++) {
			if (s[j] == 'z')s[j] = 'a';
			else s[j]++;
		}
	}

	cout << "No" << endl;
	return 0;
}