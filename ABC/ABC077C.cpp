#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<long long>s(n + 1);
    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        int k_length = c.end() - upper_bound(c.begin(), c.end(), b[n - i]);
        s[i] = s[i - 1] + k_length;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int j_length = b.end() - upper_bound(b.begin(), b.end(), a[i]);
        ans += s[j_length];
    }

    cout << ans;
    return 0;
}