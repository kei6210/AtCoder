#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    int d_length = d.size();
    int lower_border = d[d_length / 2 - 1];
    int upper_border = d[d_length / 2];
    int ans = upper_border - lower_border;

    cout << ans;
    return 0;
}