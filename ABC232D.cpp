#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<char>>c(h, vector<char>(w));
	vector<vector<int>>d(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> c[i][j];
			d[i][j] = 0;
		}
	}

	if (c[0][0] == '.')d[0][0] = 1;
	else {
		cout << 0;
		return 0;
	}

	int ans = 1;
	for (int i = 1; i < h; i++) {
		if (c[i][0] == '#') break;
		d[i][0] = d[i - 1][0] + 1;
		ans = max(ans, d[i][0]);
	}

	for (int j = 1; j < w; j++) {
		if (c[0][j] == '#') break;
		d[0][j] = d[0][j - 1] + 1;
		ans = max(ans, d[0][j]);
	}

	for (int i = 1; i < h; i++) {
		for (int j = 1; j < w; j++) {
			if (c[i][j] == '.') {
				d[i][j] = max(d[i - 1][j], d[i][j - 1]) + 1;
				ans = max(ans, d[i][j]);
			}
		}
	}
	cout << ans;
	return 0;
}