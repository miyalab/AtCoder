#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(0);

	int x, y, z;
	cin >> x >> y >> z;

	cout << (y * z - 1) / x << endl;

}