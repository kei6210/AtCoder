//C - Switches
#include <iostream>
#include <bitset>
#include <vector>
#pragma GCC optimize ("-O3")
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> k(m), p(m);
    vector<vector<int>> s(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++) {
            int x;
            cin >> x;
            s[i][j] = (int)pow(2, x - 1);
        }
    }

    for (int i = 0; i < m; i++) cin >> p[i];

    int cnt = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        bool flag = true;
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < k[i]; j++) {
                int tmp = bit & s[i][j];
                if (tmp > 0) sum++;
            }
            if (sum % 2 != p[i]) {
                flag = false;
                break;
            }
        }

        if (flag == true) cnt++;
    }

    cout << cnt;

    return 0;
}