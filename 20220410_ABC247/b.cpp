#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n;
	cin >> n;

	int flag = 0;
	vector<pair<int, int>> check(n);
	vector<string> s(n), t(n);
	for(int i=0; i<n; i++){
		cin >> s[i] >> t[i];
		
		if(flag) continue;
		for(int j=0; j<i; j++){
			if(s[i] == s[j] || t[i] == s[j]) {
				check[j].first = 1;
				check[i].first = 1;
			}
			if(s[i] == t[j] || t[i] == t[j]) {
				check[j].second = 1;
				check[i].second = 1;
			}
			if(check[j].first && check[j].second) flag = 1;
			if(check[i].first && check[i].second) flag = 1;
		}
	}

	if(flag) cout << "No" << endl;
	else cout << "Yes" << endl;
}