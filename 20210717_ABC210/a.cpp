#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n,a,x,y;
	cin >> n >> a >> x >> y;
	
	int ans = 0;
	for(int i=0;i<n;i++){
		if(i<a) ans += x;
		else ans += y;
	}

	cout << ans << endl;
}