#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	string t;
	vector<string> s(3);
	cin >> s[0] >> s[1] >> s[2] >> t;

	string ans = "";
	for(int i=0; i < (int)t.length(); i++){
		ans += s[t[i] - '1'];
	}

	cout << ans << endl;
}