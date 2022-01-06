//permutationmemo

	//順列全探索(巡回セールスマン問題)
const int INF=10000000;//十分に大きな値

int main() {
	//入力
	int n; cin >> n;//都市数
	vector<vector<int>> dist(n, vector<int>(n));//各都市間の所要時間
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> dist[i][j];

	//初期順列
	vector<int> order(n);
	for (int i = 0; i < n; i++) order[i] = i;

	//探索
	int res = INF;
	do {
		//順序orderについての所要時間を計算
		int temp_dist = 0;
		for (int i = 1; i < n; i++) {
			temp_dist += dist[order[i - 1]][order[i]];
		}
		//暫定値より小さかったら更新
		if (temp_dist < res)res = temp_dist;
	} while (next_permutation(order.begin(), order.end()));

	//出力
	cout << ans << endl;
}

	
	    
	//配列aから重複を取り除く
    sort(a.begin(),a.end());
    a.erase(std::unique(a.begin(),a.end()),a.end());

    //先にsortで整理すると良い
	sort(a.begin(), a.end());
    do{
    	//aについての処理
	} while (next_permutation(a, begin(), a.end()));