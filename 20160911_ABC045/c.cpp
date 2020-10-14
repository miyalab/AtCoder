// インクルード

#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン
int main()
{
	// 入出力の高速化
	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	string s;
	cin >> s;

	long long ans = 0;
	for(int i=0;i<s.length();i++){
		for(int j=0;j<s.length()-i;j++){
			string buf=s.substr(j,j+i);
			ans+=(long long)std::stoi(buf);
		}
	}

	cout << ans << endl;
}