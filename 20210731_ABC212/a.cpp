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

	if(0<a && b==0) cout << "Gold" << endl;
	else if(a==0 && 0<b) cout << "Silver" << endl;
	else if(0<a && 0<b) cout << "Alloy" << endl;

}