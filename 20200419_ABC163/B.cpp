// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン関数
int main()
{
	// 標準入出力　高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int a;

	cin >> n >> m;

	for(int i=0;i<m;i++){
		cin >> a;
		n -= a;
	}

	if(n<0) cout << -1 << endl;
	else cout << n << endl;
}
