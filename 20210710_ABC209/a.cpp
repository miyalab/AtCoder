#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int a,b;
	cin >> a >> b;
	int c = b - a + 1;
	if (c < 0 ) cout << 0 << endl;
	else cout << c << endl;

}