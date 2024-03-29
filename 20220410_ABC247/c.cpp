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

	string ans = "1";
	vector<string> s(n);
	for(int i=1; i<n; i++){
		ans = ans + " " + std::to_string(i+1) + " " + ans;
	}

	cout << ans << endl;
}