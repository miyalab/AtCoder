#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);
	
	long long a, b;
	cin >> a >> b;
	cout << a/b + (a%b!=0) << endl;
}