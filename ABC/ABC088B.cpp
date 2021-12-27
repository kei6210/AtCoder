#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int alice = 0, bob = 0;
    sort(a.begin(), a.end(),greater<int>());
    for (int i = 0; i < n; i++) {
        if (i % 2)bob += a[i];
        else alice += a[i];
    }
    cout << alice - bob;
    return 0;
}