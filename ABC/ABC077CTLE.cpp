#include <iostream>
#include <queue>
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


    long long ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        cout << "i:" << i << " ";
        for (int j = n - 1; j >= 0; j--) {
            if (b[j] <= a[i])break;
            int k_length = c.end() - upper_bound(c.begin(), c.end(), b[j]);
            ans += k_length;
        }
        cout << ans << "\n";
    }

    cout << ans;
    return 0;
}