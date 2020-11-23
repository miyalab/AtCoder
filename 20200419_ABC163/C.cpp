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

	int n;
	cin >> n;
	vector<int> a(n+1,0);

	for(int i=2;i<=n;i++){
		int b;
		cin >> b;
		a[b] += 1;	
	}

	for(int i=1;i<=n;i++){
		cout << a[i] << endl;
	}
}
