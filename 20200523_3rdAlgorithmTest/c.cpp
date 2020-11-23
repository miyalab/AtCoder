// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// C問題 --

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

	long long a, r, n;
	cin >> a >> r >> n;

	long long ans = a;

	for(int i=0;i<n-1;i++){
		ans *= r;
		if(ans > 1e9){
			cout << "large";
			return 0;
		}
	}
	cout << ans << endl;
}