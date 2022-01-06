    #include <iostream>
    #include <vector>
    #include <math.h>
    #pragma GCC optimize ("-O3")
    using namespace std;
     
    int main()
    {
        cin.tie(nullptr);
        ios_base::sync_with_stdio(false);
        int n; cin >> n;
     
        vector<int> a(n);
        vector<vector<int>> x(n, vector<int>(n)), y(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 0; j < a[i]; j++) {
                cin >> x[i][j] >> y[i][j];
            }
        }
     
        int ans = 0;
        for (int msk = 0; msk < (1 << n); msk++) {
            int cnt = 0;
            bool ok = true;
     
            for (int i = 0; i < n; i++) {
                int itmp = msk & (int)pow(2, i);
                if (itmp > 0) {
                    for (int j = 0; j < a[i]; j++) {
                        int tmp = msk & (int)pow(2, x[i][j] - 1);
                        if (tmp > 0)tmp = 1;
                        if (tmp != y[i][j]) {
                            ok = false;
                            j = a[i];
                        }
                    }
                    if (ok == true)cnt++;
                    else i = n;
                }
     
            }
            if (ok == true) {
                ans = max(ans, cnt);
            }
        }
     
        cout << ans;
     
        return 0;
    }