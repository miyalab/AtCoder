#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n, q;
	cin >> n >> q;
	vector<int> a(n),b(n);
	for(int i=1;i<n;i++){
		cin >> a[i] >> b[i];
	}

	int c,d;
	for(int i=0;i<q;i++){
		cin >> c >> d;
	}
}