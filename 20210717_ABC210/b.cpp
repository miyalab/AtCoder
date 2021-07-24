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
	string s;
	cin >> n;
	cin >> s;

	int index = s.find("1");
	if(index % 2 == 0) cout << "Takahashi" << endl;
	else cout << "Aoki" << endl;
}