#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(3 * n);
    for (int i = 0; i < 3 * n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    long long ans = 0;
    for (int i = 1; i < 2 * n; i += 2) {
        ans += a[i];
    }

    cout << ans;
    return 0;
}