// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// B問題 --

// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン
int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	long n, m, q;
	cin >> n >> m >> q;
	vector<vector<bool>> score(n,vector<bool>(m,false));
	vector<long> cnt(m,0);

	int s;
	int x, y;
	for(int i=0;i<q;i++){
		cin >> s;

		if(s==1){
			cin >> x;
			long sum=0;
			for(int j=0;j<m;j++){
				if(score[x-1][j]==true) sum+=n-(cnt[j]);
			}
			cout << sum << endl;
		}
		if(s==2){
			cin >> x >> y;
			score[x-1][y-1]=true;
			cnt[y-1]++;
		}
	}
}