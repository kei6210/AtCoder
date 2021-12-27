#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int>p(n + 1);
    p[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                for (int l = 0; l <= n; l++) {
                    int s = p[i] + p[j] + p[k] + p[l];
                    if (s <= m)ans = max(ans, s);
                }
            }
        }
    }

    cout << ans;
    return 0;
}