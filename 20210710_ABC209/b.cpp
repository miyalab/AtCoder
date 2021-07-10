#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n, x;
	cin >> n >> x;

	int a;
	int sum = 0;
	for(int i=1; i<=n; i++){
		cin >> a;
		if(i%2==0) sum += (a - 1);
		else sum += a;
	}

	if(x >= sum) cout << "Yes" << endl;
	else cout << "No" << endl;
}