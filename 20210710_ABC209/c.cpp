#include <bits/stdc++.h>

using namespace std;

constexpr long long mod = 1e9 + 7;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	long long n;
	cin >> n;

	vector<long long> c(n);
	for(long long i = 0; i<n; i++) cin >> c[i];

	long long ans = 1;
	sort(c.begin(), c.end());
	for(long long i = 0; i<n; i++){
		ans = ans * (c[i] - i);
		ans %= mod;
	}

	cout << ans << endl;
}