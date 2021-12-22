#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<bool>>takahashi(n, vector<bool>(n));
	vector<vector<bool>>aoki(n, vector<bool>(n));

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		takahashi[a - 1][b - 1] = true;
		takahashi[b - 1][a - 1] = true;
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		aoki[a - 1][b - 1] = true;
		aoki[b - 1][a - 1] = true;
	}

	vector<int> p(n);
	//for (int i = 0; i < n; i++)p[i] = i;
    iota(p.begin(),p.end(),0);
	
	bool ok = false;
	do {
		ok = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (takahashi[i][j] != aoki[p[i]][p[j]]) {
					ok = false;
					break;
				}
			}
		}
		if (ok == true) {
			cout << "Yes" << endl;
			return 0;
		}
	} while (next_permutation(p.begin(), p.end()));

	cout << "No" << endl;
	return 0;
}