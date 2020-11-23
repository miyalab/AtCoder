#include <bits/stdc++.h>

using namespace std;

int main()
{
	// 入出力関連設定
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << fixed << setprecision(20);

	int h1,m1,h2,m2,k;
	cin >> h1 >> m1 >> h2 >> m2 >> k;

	int min1=h1*60+m1;
	int min2=h2*60+m2-k;
	
	if(min2<=min1) cout << 0 << endl;
	else cout << min2-min1 << endl;

}