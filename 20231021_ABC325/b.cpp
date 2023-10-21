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
	cin >> n;

	vector<int> w(n);
	vector<int> x(n);
	for(int i=0; i<n; i++){
		cin >> w[i] >> x[i];
	}

	int ans = 0;
	for(int i=0; i<24; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			int time = (i + x[j]) % 24;
			if(9 <= time && time <= 17) sum += w[j];
		}
		if(ans < sum) ans = sum;
	}

	cout << ans << endl;
}