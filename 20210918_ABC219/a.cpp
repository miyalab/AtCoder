#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int x;
	cin >> x;

	if(x >= 90) cout << "expert";
	else if (x >= 70) cout << 90 - x;
	else if (x >= 40) cout << 70 - x;
	else cout << 40 - x;
	cout << endl; 
}