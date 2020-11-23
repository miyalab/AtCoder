#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	// ビットDP用
	long long dp[1050];		// 最大要素数より取っておく1000 < (2^n-1)

	// すべてのDPにコストを無限大としておく（安いものを探索するため）
	for(int i=0;i<(1<<n);i++){
		dp[i] = 1e18;
	}

	// データ入力
	for(int i=0;i<m;i++){
		string s;
		int c, x;

		cin >> s >> c;

		x=0;

		// 該当するビットDPにデータCを格納する
		for(int j=0;j<s.length();j++){
			x <<= 1;					// 1だけ左シフト
			x += (s[j]=='Y');			// if(s[j]=='Y') x += 1; と同じ
		}

		dp[x] = min(dp[x], (long long)c);
	}
	
	// ビットDP 最大計算量O(10^2)
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<(1<<n);j++){
			// 購入できる種類を更新 
			dp[i|j] = min(dp[i|j], dp[i]+dp[j]);
		}
	}
	
	// 判定
	long long ans = dp[(1<<n) -1];
	if(ans == 1e18) ans = -1;
	cout << ans << endl;

	return 0;
}