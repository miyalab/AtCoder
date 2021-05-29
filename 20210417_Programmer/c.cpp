#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int a, b;
	cin >> a >> b;

	int ans = 0;
	int calc = 0;
	int x, y;
	for(x = a; x <= b - 1; x++){
		for(y = x + 1; y <= b; y++){
			calc = gcd(x, y);
			if(ans < calc) ans = calc; 
		}
	}
	cout << ans << endl;
}