#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#pragma GCC optimize ("-O2")
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m; cin >> n >> m;

    int a, b;
    vector<vector<bool>>abtable(n, vector<bool>(n));
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        abtable[a - 1][b - 1] = abtable[b - 1][a - 1] = true;
    }

    vector<int>chosen_path(n);
    iota(chosen_path.begin(), chosen_path.end(), 0);

    int ans = 0;
    bool ok;
    do {
        if (chosen_path[0] != 0) {
            cout << ans;
            return 0;
        }
        ok = true;
        for (int i = 1; i < n; i++) {
            if (abtable[chosen_path[i - 1]][chosen_path[i]] == false) {
                ok = false;
                break;
            }
        }
        if (ok == true)ans++;
    } while (next_permutation(chosen_path.begin(), chosen_path.end()));

    cout << ans;
    return 0;
}