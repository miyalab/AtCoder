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
	int x,y;
	cin >> n >> x >> y;
	
	vector<int> a(n), b(n);
	vector<int> adiv(n), bdiv(n);
	int asum=0, bsum=0;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
		asum += a[i];
		bsum += b[i];
		adiv[i] = x - a[i];
		bdiv[i] = y - b[i];
	}

	// 達成不可
	if(x > asum || y > bsum){
		cout << -1 << endl;
		return 0;
	}

	int acalc = 0, bcalc = 0;
}