#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);   

	int n, m;
	cin >> n >> m;

	int input;
	map<int, int> c;
	for(int i=0; i<n; i++){
		cin >> input;
		c[input] += 1;
	}
	for(int i=0; i<m; i++){
		cin >> input;
		c[input] += 2;
	}

	for(auto data: c){
		if(1 <= data.second && data.second <= 2) cout << data.first << " "; 
	}
	cout << endl;
}